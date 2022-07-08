#include "main.h"

/**
 * print_line - print lines
 *
 * @n: number of lines to be printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int count = n, i;

	for (i = 0; i < count; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
