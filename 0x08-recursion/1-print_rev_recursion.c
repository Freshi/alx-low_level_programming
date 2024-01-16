#include "main.h"

/**
  * _print_rev_recusrion - prints string in reverse
  * @s: string to print in reverse
  *
  * Description - prints s in reverse recursively
  * Return: 0
  */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}


