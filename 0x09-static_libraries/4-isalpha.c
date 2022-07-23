#include "main.h"
/**
 * _isalpha - shows  1 if input is an alphabet
 *
 * @c: character to check
 *
 * Return: 1 for alphabet, 0 for the rest
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
