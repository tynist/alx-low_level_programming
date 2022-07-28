#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *f = argv[1];
	char *s = argv[2];

	if (argc != 3 || !onlyNumbers(f) || !onlyNumbers(s))
	{
		printf("Error\n");
		exit(98);
	}
	if (*f == 48 || *s == 48)
		printf("0\n");
	else
		multiply(s, f);
	return (0);
}

/**
 * multiply - multiplies two numbers and displays it
 * @f: first number
 * @s: second number
 */
void multiply(char *f, char *s)
{
	int i, len1, len2, total, fdigit, sdigit, res = 0, tmp;
	int *ptr;

	len1 = _strlen(f);
	len2 = _strlen(s);
	tmp = len2;
	total = len1 + len2;
	ptr = _calloc(sizeof(int), (len1 + len2));
	for (len1--; len1 >= 0; len1--)
	{
		fdigit = f[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			sdigit = s[len2] - '0';
			res += ptr[len2 + len1 + 1] + (fdigit * sdigit);
			ptr[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[len1 + len2 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total--;
	}
	for (i = 0; i < total; i++)
		printf("%i", ptr[i]);
	printf("\n");
}
/**
 * onlyNumbers - determines if string has only numbers
 * @c: input string
 * Return: 0 if false, 1 if true
 */
int onlyNumbers(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _memset - fills memory with a constant
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}


#include "main.h"

/**
 * main - multiplication of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j;
	unsigned long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%lu\n", num1 * num2);

	return (0);
}
