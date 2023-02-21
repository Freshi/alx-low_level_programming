#include "main.h"

/**
 * _islower - checks for lowecase
 * @c: letter to check
 *
 * Description: checks whwther a given letter is lower case
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

