#include <stdio.h>
#include <ctype.h>

/**
 * main - print bpth alphabets
 *
 * Descritiption: prints a-z then A-Z
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
