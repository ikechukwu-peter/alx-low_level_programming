#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - entry point
 *Description: print alphabet in lowercase x10
 *Return: Always 0
 */
int print_alphabet(void)
{
int c, a;
for (c = 0; c <= 10; c++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
return (0);
}
