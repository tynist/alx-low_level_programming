#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: 1 (success) Otherwise - 1 (fails)
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int nletters;
	int wri;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	wri = write(op, text_content, nletters);

	if (wri == -1)
		return (-1);

	close(op);

	return (1);
}
