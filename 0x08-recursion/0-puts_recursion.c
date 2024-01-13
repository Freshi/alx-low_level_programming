#include "main.h"

/**
* _puts_recursion - prints a string recursively
* @str: string to be printed
*
* Description - prints our string recursively
* Return : 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(&(*(s + 1)));
	_putchar('\n');
}
