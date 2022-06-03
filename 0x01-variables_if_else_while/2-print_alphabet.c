#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercase
 * followed by a new line
 * Return: 0
 */
int main (void)
{
char i;
for (i='a' ; i <= 'z' ; i++)
putchar(i);
putchar('\n');
}