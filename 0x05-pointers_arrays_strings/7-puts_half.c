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
  * puts_half - prints second hand of string
  * @str - pointer to string
  *
  * Description - prints last half of str
  * Return: 0
  */

void puts_half(char *str)
{
	int len = _strlen(str) - 1;
	int i = 0;

	if (len % 2 != 0)
	{
		i = (len - 1) / 2 + 1;
	}

	else
	{
		i = len / 2 + 1;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}

	_putchar('\n');
}
