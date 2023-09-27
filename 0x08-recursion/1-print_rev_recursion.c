#include "main.h"

/**
 * _print_rev_recursion - prints a given string in reverse
 * @s: given string
 * return: 0 success and 1 for error
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
