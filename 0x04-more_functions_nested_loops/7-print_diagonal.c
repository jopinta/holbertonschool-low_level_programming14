 #include "holberton.h"
/**
 * print_diagonal - main minute
 *@n: num
 *
 * Return: ceropio
 */

void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 0; x < (i - 1); x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
