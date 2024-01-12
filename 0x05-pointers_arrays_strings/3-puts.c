#include "main.h"

/**
 * _puts - prints out a string
 * @str: string to print to stdout
 *
 * Description - prints out a string taken as an arg
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
