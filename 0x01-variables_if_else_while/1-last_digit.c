#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, dec;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
dec = n % 10;

if (dec > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, dec);
}
else if (dec == 0)
{
printf("Last digit of %d is %d and is 0\n", n, dec);
}
else
{
printf("Last digit of %d is %d and is 6\n", n, dec);
}
return (0);
}
