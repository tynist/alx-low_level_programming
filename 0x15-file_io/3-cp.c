#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @op_from: file descriptor of file_from, or -1
 * @op_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int op_from, int op_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (op_from != -1)
			close(op_from);
		if (op_to != -1)
			close(op_to);
		exit(98);
	}
}

/**
 * check99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @op_from: file descriptor of file_from, or -1
 * @op_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int op_from, int op_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (op_from != -1)
			close(op_from);
		if (op_to != -1)
			close(op_to);
		exit(99);
	}
}

/**
 * check100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fop: file descriptor
 *
 * Return: void
 */
void check100(int check, int op)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close op %d\n", op);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int op_from, op_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	op_from = open(argv[1], O_RDONLY);
	check98((ssize_t)op_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	op_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)op_to, argv[2], op_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(op_from, buffer, 1024);
		check98(lenr, argv[1], op_from, op_to);
		lenw = write(op_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], op_from, op_to);
	}
	close_to = close(op_to);
	close_from = close(op_from);
	check100(close_to, op_to);
	check100(close_from, op_from);
	return (0);
}
