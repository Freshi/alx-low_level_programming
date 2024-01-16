#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - prints len of string
 * @s: string to print in reverse
 *
 * Description - prints s in reverse recursively
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}

/**
 * _strdup - returns pointer to copy of string
 * @str: string to copy
 *
 * Description - returns editable duplicate of string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p;
	int len = _strlen_recursion(str);

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(len * sizeof(char));

	while (i < len + 1)
	{
		*(p + i) = str[i];
		i++;
	}

	return (p);
}




