#include "main.h"
/**
 * _puts_recursion - prints a given string
 * @s: string printed
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
