#include "main.h"

/**
 * factorial - determines the factorial numbers of a given number
 * @n: given number
 * return: factorials on positives and 0 and -1 on negatives
 */

int factorial(int n)
{
	if (n==0)
	{
		return (1);
	}
	else if (n<0)
	{
		return (-1);
	}
	else
		return (n*factorial(n-1));
}
