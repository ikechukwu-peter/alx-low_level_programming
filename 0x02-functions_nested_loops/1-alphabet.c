#include <stdio.h>
#include "main.h"
/**
*print_alphabet - entry point
*Description: this prints all the alphabet in lowercase
*Return: Always 0
*/
int print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
printf("\n");
return (0);
}
