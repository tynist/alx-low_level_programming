<<<<<<< HEAD
gdhdhh
=======
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
>>>>>>> be85ee8bcd8952e1804ebc0edd8a2c4bcb2701df
