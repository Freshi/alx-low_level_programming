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

/**
  *print_rev - prints string in reverse
  *@s: string to print in reverse
  *
  *Description - prints string in reverse
  *Return: 0
  */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (; i > -1; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
