#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description: converts string to lowercase
 *Return: Alwasy 0 (success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
