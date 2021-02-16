#include "holberton.h"

/**
 * swap_int - ll
 *@a: number 1
 *@b: number 2
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int a2 = *a;

	*a = *b;
	*b = a2;
}
