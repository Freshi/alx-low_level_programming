#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Description: Prints numbers in base 10 staring with 0
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	putchar('\n');
	return (0);
}
