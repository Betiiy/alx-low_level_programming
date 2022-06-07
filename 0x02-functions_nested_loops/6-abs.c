#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * description - a function that prints the absolute value of a number.
 * @n : integer to check
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
    if (n >= 0)
    return (n);
    else
    return (n*(-1));
}