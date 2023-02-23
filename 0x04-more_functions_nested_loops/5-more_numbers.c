#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;
		while (j < 14)
		{
			_putchar(i/10 + '0');
		}

		_putchar('\n');
	}
}
