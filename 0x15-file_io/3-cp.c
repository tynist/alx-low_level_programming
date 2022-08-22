#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int op);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of the file buffer is storing chars
 *
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes file descriptors
 * @op: file descriptor to be closed
 */
void close_file(int op)
{
	int c;

	c = close(op);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 (success)
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, op, re, wri;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wri = write(op, buff, re);
		if (op == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write op %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(from, buff, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buff);
	close_file(from);
	close_file(op);

	return (0);
}
