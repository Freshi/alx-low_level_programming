#include "main.h"

/**
  * _pow_recursion - returns number to power y
  * @x: number to apply exponent
  * @y: exponent
  *
  * Description - return int x to the power y
  * Return: 0
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}

