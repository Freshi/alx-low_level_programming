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
  * rev_string - reverses a string
  * @s: string to reverse
  *
  * Description - reverses a string
  * Return: 0
  */

void rev_string(char *s)
{
	int i = 0;
	char temp;

	int j = _strlen(s) - 1;

	for (; i <= j ; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		}
}
