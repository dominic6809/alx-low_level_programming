#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username used to generate the key.
 * @key: The generated key.
 *
 * Return: None.
 */
void generate_key(const char *username, char *key)
{

	snprintf(key, 20, "KEY_%s", username);
}
/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	char key[20];

	if (argc != 2)
	{
	printf("Usage: %s username\n", argv[0]);
	return (1);
	}

	generate_key(argv[1], key);

	printf("Generated key for %s: %s\n", argv[1], key);

	return (0);
}
