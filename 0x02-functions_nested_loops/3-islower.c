#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * description -  a function that checks for lowercase character.
 * @c - character to check the case
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
