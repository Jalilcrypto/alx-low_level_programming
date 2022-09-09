#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all numbers of base 6 in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
