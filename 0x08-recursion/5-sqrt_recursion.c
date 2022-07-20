#include "main.h"
/**
 * sqtChecker - computes square root recursively doing binary search
 * @min: inital number
 * @max: last number within the limit of number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtChecker(int min, int max, int m)
{
	long int guess;

	if (max >= min)
	{
		guess = min + (max - min) / 2;
		if (guess * guess == m)
			return (guess);
/* following binary search */
		if (guess * guess > m)
			return (sqtChecker(min, guess - 1, m));
		if (guess * guess < m)
			return (sqtChecker(guess + 1, max, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqtChecker(1, n, n));
}
