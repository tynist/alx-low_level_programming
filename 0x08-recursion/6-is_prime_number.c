#include "main.h"

/**
 * is_prime - Checks if a number if prime or not
 * @n: This is the number
 * @y: This is a buffer
 *
 * Return: An int of 1 if true and O otherwise
 */
int is_prime(int n, int y)
{
	if (n == 1)
		return (0);
	else if (n % y == 0 && y != n && y != 1)
		return (0);
	else if (n % y == 0 && y == n)
		return (1);
	else
		return (is_prime(n, y + 1));
}

/**
 * is_prime_number - Returns whether prime or not to main
 * @n: The number
 *
 * Return: An int 1 0r 0 to show prime or not resp.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
