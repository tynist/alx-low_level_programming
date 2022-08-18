#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 *         Otherwise - the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
