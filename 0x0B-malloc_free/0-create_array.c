#include "main.h"
#include <stdlib.h>

/**
  * create_array - create array of certain size
  * @c: character to initilise array with
  * @size: size of array
  *
  *Description - creates array[size] initilised with c
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	return (p);
}
