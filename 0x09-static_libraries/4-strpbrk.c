#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source string
 * @accept: set of bytes to be searched for
 * Return: pointer to the matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
