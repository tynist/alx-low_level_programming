#include "main.h"

/**
 * print_square - print square
 * @size: number to print
 * Return: 0
 */

void print_square(int size)
{
	int first, second;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (first = 0; first < size; first++)
		{
			for (second = 0; second < size; second++)
			{
				_putchar('#');
			}
			if (first == size - 1)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
