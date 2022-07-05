#include "main.h"
/**
 * times_table  - multiplication table
 *
 * Return: no return   Always (SUCCESS)
 *
*/
void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a, b;
	int result;
	int firstnum;
	int lastnum;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = num1[a] * num2[b];
			firstnum = result / 10;
			lastnum = result % 10;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar('0' + result);
			else
			{
				_putchar('0' + firstnum);
				_putchar('0' + lastnum);
			}
		}
		_putchar('\n');
	}


}
