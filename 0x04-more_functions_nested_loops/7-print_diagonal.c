#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of lines to print
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			for (i = 0; i < num; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
