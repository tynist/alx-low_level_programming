#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: numbers of elements
 * @size: byte size of memory
 * Return: pointer to the address of the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
