#include "main.h"

/**
 * _islower - lower case character check
 * @c: char checked
 * Return: 1 for lowercase or 0 for other
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
