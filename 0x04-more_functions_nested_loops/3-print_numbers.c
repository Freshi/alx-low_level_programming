#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}

	_putchar('\n');
}
