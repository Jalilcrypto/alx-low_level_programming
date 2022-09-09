#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all letters except q and e.
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
do {
if (c != 'e' && c != 'q')
{
putchar(c);
c++;
}
else
c++;
} while (c <= 'z');
putchar('\n');
return (0);
}
