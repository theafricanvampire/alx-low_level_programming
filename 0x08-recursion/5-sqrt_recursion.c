#include "main.h"

int _sqrt(int n, int q);
/**
 * _sqrt_recursion - calculates the squareroot of a number
 * @n: number given
 * return: sqrt of the given number and -1 on error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * sqrt - finds actual, natural squareroot result
 * @n: number given
 * @q: iterator
 *
 * Return: 1
 */

int _sqrt(int n, int q)
{
	if (q * q > n)
	{
		return (-1);
	}
	else if (q * q == n)
	{
		return (q);
	}
	else
		return (_sqrt(n, q + 1));
}
