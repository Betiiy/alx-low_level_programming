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
int x, y, z;
for (x = 0 ; x < 10 ; x++)
{
for (y = 0 ; y < 9; y++)
{
for (z = y + 1 ; z < 10; z++)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar(' ');
putchar((x % 10) + '0');
putchar((z % 10) + '0');

if (x == 9 && y == 8 && z == 9)
continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
