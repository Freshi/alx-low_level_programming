#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Description: Prints mins from Midnight to a min toe midnight
 * Return: 0
 */

void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int m;

		for (m = 0; m < 60; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
		}
	}
}
