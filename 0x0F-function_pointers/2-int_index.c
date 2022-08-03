#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 * Return: If no element matches or size <= 0 - -1
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
