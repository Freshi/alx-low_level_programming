#include "main.h"

/**
 * print_to_98 - prints numbers
 * @n: number to start
 *
 * Description: Prints starting with i to 98
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}
