#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description- a function that prints the alphabet, in lowercase, followed by a new line.
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