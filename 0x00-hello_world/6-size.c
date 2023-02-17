#include <stdio.h>

/**
 * main - Start of the program
 *
 * Description: print type sizes by based on system.
 * Return: 0
 */

int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int li = sizeof(long int);
	int lli = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %d bytes(s)\n", c);
	printf("Size of a int: %d bytes(s)\n", i);
	printf("Size of a long int: %d bytes(s)\n", li);
	printf("Size of a long long int: %d bytes(s)\n", lli);
	printf("Size of a float: %d bytes(s)\n", f);

	return (0);
}
