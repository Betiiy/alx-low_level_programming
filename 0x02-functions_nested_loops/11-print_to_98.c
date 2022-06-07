#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 * description - a function that print numbers.
 * @n : number to check
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
    int i;

    if (n < 98)
    {
        for (i = n ; i <= 98 ; i++ )
        {
            _putchar(i);
            _putchar(',');
            _putchar(' ');

        }
    }
    else if (n > 98)
    {
        for (i = 98 ; i >= 98 ; i--)
        {
            _putchar(i);
            _putchar(',');
            _putchar(' ');
        }

    }
    else
    _putchar(n);
}
