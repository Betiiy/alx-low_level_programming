#include <stdio.h>
#include "main.h"

/**
 * _isalpha - entry point
 * description - a function that prints the sign of a number.
 * @c : character to check the case
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
    else{
        _putchar('0');
        return (0);
    }
    return 0;
}