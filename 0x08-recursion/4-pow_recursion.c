#include "main.h"

/**
 * _pow_recursion - returns x^y
 * @x: base number
 * @y: superscript number
 *
 * Return: always 1 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
