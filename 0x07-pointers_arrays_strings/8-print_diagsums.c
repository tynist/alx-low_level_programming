#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += b[(size + 1) * b];
		sum2 += b[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
