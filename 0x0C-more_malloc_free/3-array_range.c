#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: smallest number in the array
 * @max: largest value in the array
 * Return: pointer to the address of the memory
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i, j;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; j++, i++)
		array[j] = i;

	return (array);
}
