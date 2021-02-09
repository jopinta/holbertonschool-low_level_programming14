#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - this function prints the alphabet ten times.
 *
 * Return: X10 a-z
 */
void print_alphabet_x10(void)
{
	char ni, x;

	ni = 0;

	while (ni < 10)
{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(ni);
	}
	ni++;
	_putchar('\n');
}
}
