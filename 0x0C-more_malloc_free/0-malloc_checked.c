#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Return: pointer to the address of the memory 
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
