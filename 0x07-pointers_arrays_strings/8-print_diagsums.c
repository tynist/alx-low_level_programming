#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: matrix of integers
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; b++)
	{
		sum1 += i[(size + 1) * i];
		sum2 += i[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
