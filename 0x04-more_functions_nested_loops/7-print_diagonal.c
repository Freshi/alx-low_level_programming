#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j = 0;

		while (j < n)
		{
			if (j != i)
			{
				_putchar(' ');
			}
			else
				_putchar('\\');
			j++;
		}

		_putchar('\n');
	}
}
