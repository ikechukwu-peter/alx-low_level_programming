#include <stdio.h>
#include "main.h"
/**
*print_alphabet - entry point
*Description: this prints all the alphabet in lowercase
*Return: Always 0
*/
int print_alphabet(void)
{
int _putchar(char);
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
printf("\n");  
return (0);
}
int _putchar(char a)
{
printf("%c", a);
return (0);
}
