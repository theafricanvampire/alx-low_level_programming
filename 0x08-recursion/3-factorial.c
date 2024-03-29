#include "main.h"

/**
 * factorial - determines the factorial numbers of a given number
 * @n: given number
 *
 * Return: 1 on success and 0 on error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
