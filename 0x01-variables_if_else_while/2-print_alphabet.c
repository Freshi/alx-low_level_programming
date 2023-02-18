#include <stdio.h>

/**
 * main - Printns alphabet
 *
 * Description: prints alphabet in upper case
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
