#include "holberton.h"
#include "2-strlen.c"
/**
 * puts_half - !n
 * @str: String
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = _strlen(str), i = 0, j = 0;

	if (len % 2 != 0)
		j = len - ((len - 1) / 2);
	else
		j = len - (len / 2);

	for (i = j ; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
