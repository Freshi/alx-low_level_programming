#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number whose sign is checked
 *
 * Description: checks the sign of a given number and prints it out to stdout
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
