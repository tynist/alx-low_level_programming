#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 58; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
