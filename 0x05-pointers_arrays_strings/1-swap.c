#include "main.h"
/**
 * swap_int - swaps the values of two variables
 * @a: first value to swap
 * @b: second value to swap
 *
 * Description: Gets two pointers and swaps their values
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
