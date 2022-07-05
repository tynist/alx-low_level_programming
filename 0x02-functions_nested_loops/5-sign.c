#include "main.h"
/**
 * print_sign - Determines if the input number </>/ = zero.
 *
 * The input number as an interger.
 * @n: character to check
 * Return: 1 for alphabet. & for the rest Always (SUCCESS)
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');

}
