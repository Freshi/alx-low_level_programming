#include "main.h"

/**
 * _isdigit - Checks for numbers
 * @c: character to ve checked
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c > 47 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
