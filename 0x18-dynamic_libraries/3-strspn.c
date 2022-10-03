#include "main.h"
#include <string.h>

/**
 * _strspn - length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes in s 
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
