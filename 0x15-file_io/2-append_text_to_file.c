#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 if the file exists, -1 if function fails, does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int nletters;
	int wri;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		wri = write(op, text_content, nletters);

		if (wri == -1)
			return (-1);
	}

	close(op);

	return (1);
}
