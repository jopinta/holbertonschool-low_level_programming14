#include "holberton.h"
#include <stdio.h>
/**
 * _islower - check lower case char.
 *@c
 * Return: Always 0.
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
