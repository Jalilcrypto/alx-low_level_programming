#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print number of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
	printf("%d", c);
}
putchar('\n');
return (0);
}
