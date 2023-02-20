#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("last digit == n % 10", lastdigit);
	if(n>5)
	{
		printf(" and is greater than 5\n");
	}
	else if(n==0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
	}
}
