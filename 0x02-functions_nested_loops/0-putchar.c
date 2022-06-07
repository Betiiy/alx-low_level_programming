#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description- a program that prints _putchar, followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char name[] = "_putchar";
int i;
for (i = 0 ; i < 8 ; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
