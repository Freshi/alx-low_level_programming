#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string to get length of
 *
 * Description - returns the length of string pointed to
 * Return: 0
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (; *s != '\0'; i++)
	{
		len++;
		s++;
	}

	return (len);
}
