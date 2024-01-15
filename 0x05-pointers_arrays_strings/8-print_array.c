#include "main.h"

/**
  * print_array - prints specified number of array items
  * @a; array to print from
  * @n: int - number of items to print
  *
  * Description - print n numbers of a
  * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	char s[] = ", ";

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf("%s", s);
		}

		i++;
	}

	printf("\n");
}

