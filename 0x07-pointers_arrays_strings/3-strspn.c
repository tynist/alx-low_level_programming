#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes in s consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
