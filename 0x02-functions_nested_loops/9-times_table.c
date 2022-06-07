#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 * description - a function that prints every minutes of a day.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int x, y, xy;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			xy = x * y;
			if (x == 0)
			{
				_putchar(xy + '0');
			}
			else if (xy >= 10)
			{
				_putchar(' ');
				_putchar(xy / 10 + '0');
				_putchar(xy % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(xy + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}