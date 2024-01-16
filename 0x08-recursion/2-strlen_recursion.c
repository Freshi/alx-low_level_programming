#include "main.h"

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
