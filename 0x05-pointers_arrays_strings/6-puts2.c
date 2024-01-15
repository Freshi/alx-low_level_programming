#include "main.h"

/**
  * puts2 - returns every other character
  * @str: Pointer to the string from which to return characters
  *
  * Description : return every other character
  * Return: 0
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}

	_putchar('\n');
}
