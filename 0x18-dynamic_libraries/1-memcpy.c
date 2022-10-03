#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: pointer to char params
 * @src: source
 * @n: number of bytes
 * Return: pointer to *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
