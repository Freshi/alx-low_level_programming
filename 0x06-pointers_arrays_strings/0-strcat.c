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
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Description - joins src to end of dest
  * Return: 0
  */

char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int src_len = _strlen(src) + 1;
	int i = 0;

	while (i < src_len)
	{
		*(dest + len) = src[i];
		len = len + 1;
		i++;
	}

	return (dest);
}

