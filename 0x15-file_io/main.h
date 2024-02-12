#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#define FILE_ERROR -1
#define INVALID_NUMBER_OF_ARGUMENTS 97
#define DOES_NOT_EXIST_OR_UNABLE_TO_READ 98
#define CANNOT_CREATE_OR_WRITE 99
#define CANNOT_CLOSE 100
#define ARGUMENT_COUNT_EXPECTED 3

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_handler(int src, int dest);
void error_handler(int src, int dest, char *argv[]);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
