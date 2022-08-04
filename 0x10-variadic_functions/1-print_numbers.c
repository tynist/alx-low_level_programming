#include "variadic_functions.h"

/**
 * print_numbers - prints strings
 * @separator: string to be printed between strings
 * @n: number of integers passed to the function
 * @...: a variable number of arguments to be printed
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(str, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(str);
}
