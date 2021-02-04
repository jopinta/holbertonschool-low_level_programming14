#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lt;
for (lt = '0' ; lt <= '9' ; lt++)
{
putchar(lt);
}
for (lt = 'a' ; lt <= 'f' ; lt++)
{
putchar(lt);
}
putchar('\n');
return (0);
}
