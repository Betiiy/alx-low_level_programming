#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * description- a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;

	}
	_putchar('\n');

}
