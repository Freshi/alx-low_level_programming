#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - prints the last digit of number
 * @i: number whose last digit is printed
 *
 * Description: Takes an integer and prints out it's last digit
 * Return: 0
 */

int print_last_digit(int i)
{
	int j;

	if (i == INT_MIN || i == INT_MAX)
	{
		j = labs(i) % 10;
	}
	else
	{
		j = abs(i) % 10;
	}

	_putchar(48 + j);

	return (j);
}
