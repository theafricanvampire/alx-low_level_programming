#include <stdio.h>
/**
 * main - entry point
 *
 * return: always (0) success
 */
char main(void)
{
	char ch;
	(ch='a'); (ch<='z'); (ch++);
	putchar("%c", ch);
	return (0);

}
