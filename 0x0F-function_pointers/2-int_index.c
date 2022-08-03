#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 * Return: if no element matches or size <= 0 - -1
 * 	 otherwise - The index of the first element for which
 *                   the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; index < size; index++)
			if (cmp(array[index]))
				return (index);
	}

	return (-1);
}
