#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * description - a function that prints the sign of a number.
 * @n : integer tp print the sign
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
return (0);
}
