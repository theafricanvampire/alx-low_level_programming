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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
				
	
		m = n % 10;
	{
		printf("%d", m);
	}
	
	if(n>5)
	{
		printf(" and is greater than 5\n");
	}
	else if(6>n(!=0))
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}
	return (0);
	}
}
