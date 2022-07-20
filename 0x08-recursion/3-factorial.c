#include "main.h"

/**
 * factorial -  searchs for the factorial of a number
 * @n: number to find the factorial of
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
