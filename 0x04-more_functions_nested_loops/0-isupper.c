#include "main.h"

/**
 * _isupper - Checks case of letter
 * @c: letter whose case is checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
