#include "main.h"
#include "stdio.h"

/**
 * _puts - prints string str and a new line below it
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}
