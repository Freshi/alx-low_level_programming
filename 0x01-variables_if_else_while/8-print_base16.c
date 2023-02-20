#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Description: Prints all hexadecimal nubmers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (j = 'A'; j <= 'F'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
