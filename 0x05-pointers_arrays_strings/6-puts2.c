#include "main.h"

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
  * puts2 - returns every other character
  * @str: Pointer to the string from which to return characters
  *
  * Description : return every other character
  * Return: 0
  */

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (str[i] == '\n')
		{
			break;
		}

		_putchar(*(str + i));
		i = i + 2;
	}

	_putchar('\n');
}
