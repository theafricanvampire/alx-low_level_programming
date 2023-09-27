#include <unistd.h>

/*
 * _putchar - prints given characters
 * @x: the given character
 * return: always 1 on success
 */
int _putchar(char x)
{
	return (write(1,&x,1));
}
