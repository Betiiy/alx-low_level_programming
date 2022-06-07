#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description- a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char i;
    for (i = 'a' ; i < 'z' ; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}