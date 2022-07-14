#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	char options[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if ((str[i] == options[j] || str[i] == (options[j] + 32)))
				str[i] = options[j + 1];
		}
	}

	return (str);
}
