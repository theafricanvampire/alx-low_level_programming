#include "main.h"

/**
 * _islower(int c)- lower case character check
 *
 * return: (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
