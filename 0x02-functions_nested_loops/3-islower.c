#include "main.h"

/**
 * _islower(int c)- lower case character check
 * @c: char checked
 * return: (1) for lower case and (0) for other
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
