#include "main.h"
/**
 * print_last_digit  - prints the LAST DIGIT of an integer
 *
 * The input number as an integer.
 * @n: input shold be an integer
 * Return: last digit   Always (SUCCESS)
 *
*/
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
/*using ASCII valuse in the code above*/
	_putchar('\n');

}
