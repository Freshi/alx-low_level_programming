#include "main.h"
#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string to get length of
 *
 * Description - returns the length of string pointed to
 * Return: 0
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (; *s != '\0'; i++)
	{
		len++;
		s++;
	}

	return (len);
}

/**
  * _strcpy - returns copy to buffer
  * @dest: destination buffer
  * @src: src
  *
  * Description - Copy string from source to buffer
  * Return: ponter to dest buffer
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
