#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description- a program that prints _putchar, followed by new line.
 * 
 * returns - (0)
 */

int main(void)
{
    char name[] = "_putchar";
    int i;
    for ( i = 0 ; i < 9 ;i++ )
    {
        _putchar(name[i]);
    }
    _putchar('\n');
    return (0);
}