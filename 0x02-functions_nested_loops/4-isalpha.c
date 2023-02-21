#include "main.h"

/**
 * _isalpha - checks for letters
 * @c: letter to be checked
 *
 * Description: checks for both upper and lowercase letters
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 122) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
