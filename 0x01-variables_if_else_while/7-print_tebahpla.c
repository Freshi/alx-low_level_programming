#include <stdio.h>
#include <ctype.h>

/**
 * main - Printns alphabet
 *
 * Description: prints alphabet in upper case
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(tolower(x));
	}

	putchar('\n');

	return (0);
}
