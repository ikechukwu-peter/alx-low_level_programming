#include <stdio.h>
/**
 *main - entry point
 *Description: displays base 16 number in lowercase
 *Return: Always 0
 */
int main(void)
{
char c;
for (c = 0; c < 16; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
