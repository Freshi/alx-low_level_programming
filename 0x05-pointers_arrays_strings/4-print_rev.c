#include "main.h"

/**
  * print_rev - prints string in reverse
  * @s: string to print in reverse
  *
  * Description - prints string in reverse
  * Return: 0
  */

void print_rev(char *s)
{
	int i = _strlen(s);

	for (; i > -1; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
