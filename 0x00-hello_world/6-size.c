#include <stdio.h>

/**
* main - Size of a char: 1 byte(s)
*Size of an int: 4 byte(s)
*Size of a long int: 4 byte(s)
*Size of a long long int: 8 byte(s)
*Size of a float: 4 byte(s)
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);

}
