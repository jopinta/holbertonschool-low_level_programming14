#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m, x;
for (m = '0' ; m <= '9' ; m++)
{
for (x = '0' ; x <= '9' ; x++)
{
putchar(m);
putchar(x);
if (x == '9' && m  == '9')
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
