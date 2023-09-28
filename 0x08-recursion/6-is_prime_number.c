#include "main.h"

int _prime(int n, int p);
/**
 * is_prime_number - denotes prime numbers
 * @n: possible prime number denoted
 * return: 1 on success, 0 on error
 */

int is_prime_number(int n)
{
	if (n<=1)
		return (0);
	else
		return (_prime(n, n-1));
}

/**
 * _prime - determines if a number is prime or not
 * @n: given number
 * @p: iterative numbers
 * return: 1 on success, 0 on non-prime
 */

int _prime(int n, int p)
{
	if (p==1)
		return (1);
	else if (n%p==0&&p>0)
		return (0);
	return (_prime(n, p-1));
}
