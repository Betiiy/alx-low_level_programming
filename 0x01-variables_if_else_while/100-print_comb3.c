#include <stdio.h>
/**
* main -entry point
*description - a program that prints minimum combinations
* of two digit number followed by newline
*/
int main(void)
{
int x,y;
for (int x=0 ; x<9 ; x++){
for (int y=x+1 ;y < 10; y++){
putchar((x%10)+ '0');
putchar((y%10)+ '0');

if (x==8 && y==9)
continue;

putchar(',');
putchar(' ');
}
}


}
