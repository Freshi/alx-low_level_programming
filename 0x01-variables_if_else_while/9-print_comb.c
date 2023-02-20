#include <stdio.h>

/**
 * main - Patience and persistence
 *
 * Description: Print all possible combinations of numbers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(32);
			putchar(44);
		}
	}

	putchar('\n');
	return (0);
}
