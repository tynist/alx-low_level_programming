#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: parameter string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
