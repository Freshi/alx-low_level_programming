#include "main.h"

/**
 * print_most_numbers - prints nums skipping 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
		{
			continue;
		}
		else
		{
			_putchar(48 + i);
		}
	}
	_putchar('\n');
}
