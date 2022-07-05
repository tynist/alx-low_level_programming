#include "main.h"
/**
 *  _abs - compute absolute value of an integer
 *
 *  @i: input should be an integer
 *  Return: absolute value always (SUCCESS)
 *
 **/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}

	_putchar('\n');

}
