#include <stdio.h>
#include "holberton.h"

/**
 * main - main main rara
 *
 * Return: seguro 0.
 */
int main(void)
{
	int i;
	float c1, c2;

	for (i = 1; i <= 100; i++)
	{
		c1 = i % 3;
		c2 = i % 5;

		if (c1 == 0 && c2 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c1 == 0)
		{
			printf("Fizz");
		}
		else if (c2 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
