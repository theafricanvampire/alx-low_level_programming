#include <stdio.h>

/**
 * _strlen - determines the length of a given string
 * @str: string sampled
 * Return: length of str
 */

int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
