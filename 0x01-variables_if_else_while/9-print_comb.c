#include <stdio.h>

/**
 * main - Patience and persistence
 *
 * Description: Print all possible combinations of numbers
 * Result: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		for (j = 0; j < 10; j++)
		{
			putchar(48 + j);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
