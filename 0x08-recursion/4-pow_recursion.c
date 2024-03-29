#include "holberton.h"
#include <stdio.h>

/**
 *_pow_recursion - power functions.
 *@x: equis
 *@y: why
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
