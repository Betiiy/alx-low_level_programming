#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -entry point
*description - a program that prints minimum combinations
* of two digit number followed by newline
* Return: Always 0.
*/
int main(void)
{
int x, y, z, b;
for (x = 0 ; x < 10 ; x++)
{
for (y = 0 ; y < 10; y++)
{
for (z = 0 ; z < 10; z++)
{
for (b = 0 ; b < 10; b++)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar(' ');
putchar((z % 10) + '0');
putchar((b % 10) + '0');

if (x == 9 && y == 8 && z == 9 && b == 9)
continue;

putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
