#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: 1st integer to be swapped
 * @b 2nd integer to be swapped
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
