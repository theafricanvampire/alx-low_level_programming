#include "main.h"

/**
 * _strlen_recursion - provides the length of a given string via character no.
 * @s: given string
 * return: length of the given string on success
 */

int _strlen_recursion(char *s)
{
	int l=0;
	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
