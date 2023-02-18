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

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == 'E' || x == 'Q')
			continue;
		putchar(tolower(x));
	}
	
	putchar('\n');

	return (0);
}
