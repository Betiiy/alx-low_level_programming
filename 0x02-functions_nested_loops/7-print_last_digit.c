#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * description - a function that prints the last digit of a number.
 * @n : integer to check
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
    int d;
    if (n < 0)
    d = -1 * (n % 10);
    else
    d = n % 10;

    _putchar(d + '0');
    return (d);
}