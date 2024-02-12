#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Print error message and exit with status code 98
 * @message: The error message to display
 */

void print_error(const char *message)
{
        fprintf(stderr, "Error: %s\n", message);
        exit(98);
}

/**
 * print_elf_header_info - Print the information contained in the ELF header
 * @header: Pointer to the ELF header structure
 */

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;
	printf("Magic: ");
        for (i = 0; i < EI_NIDENT; i++)
                printf("%02x ", header->e_ident[i]);
        printf("\n");

        printf("Class: ");
        switch (header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
                printf("ELF32\n");
                break;
        case ELFCLASS64:
                printf("ELF64\n");
                break;
        default:
                printf("Invalid!\n");
                break;
        }

        printf("Data: ");
        switch (header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
                printf("2's complement, little-endian\n");
                break;
        case ELFDATA2MSB:
                printf("2's complement, big-endian\n");
                break;
        default:
                printf("Invalid\n");
                break;
        }

        printf("Version: %d\n", header->e_ident[EI_VERSION]);

        printf("OS/ABI: ");
        switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
                printf("UNIX System V ABI\n");
                break;
        case ELFOSABI_HPUX:
                printf("HP-UX\n");
                break;
        case ELFOSABI_NETBSD:
                printf("NetBSD\n");
                break;
        case ELFOSABI_LINUX:
                printf("Linux\n");
                break;
        case ELFOSABI_SOLARIS:
                printf("Solaris\n");
                break;
        case ELFOSABI_FREEBSD:
                printf("FreeBSD\n");
                break;
        case ELFOSABI_OPENBSD:
                printf("OpenBSD\n");
                break;
        default:
                printf("Invalid! please choose again\n");
                break;
        }

        printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

        printf("Type: ");
        switch (header->e_type) {
        case ET_NONE:
                printf("None\n");
                break;
        case ET_REL:
                printf("Relocatable\n");
                break;
        case ET_EXEC:
                printf("Executable\n");
                break;
        case ET_DYN:
                printf("Shared object\n");
                break;
        case ET_CORE:
                printf("Core\n");
                break;
        default:
                printf("Unknown\n");
                break;
        }

        printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, and 98 on error
 */

int main(int argc, char *argv[])
{
        const char *filename = NULL;
	int fd;
	Elf64_Ehdr header;
	if (argc != 2) {
                print_error("Invalid number of arguments");
        }

        filename = argv[1];
        fd = open(filename, O_RDONLY);
        if (fd == -1) {
                print_error("Failed to open file");
        }

        if (read(fd, &header, sizeof(header)) != sizeof(header)) {
                print_error("Failed to read ELF header");
        }

        if (header.e_ident[EI_MAG0] != ELFMAG0 ||header.e_ident[EI_MAG1] != ELFMAG1 ||header.e_ident[EI_MAG2] != ELFMAG2 ||header.e_ident[EI_MAG3] != ELFMAG3) {
                print_error("Not an ELF file");
        }

        print_elf_header_info(&header);

        close(fd);
        return 0;
}
