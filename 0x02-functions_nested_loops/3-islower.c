#include "main.h"

/**
 * int _islower(int c) - checks for lowecase
 *
 * Desription: returns (1) if lower case and (0)
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

