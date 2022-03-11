#include <stdio.h>
/**
 *main - entry point
 *Description: wull print alphabet in reverse order
 *Return: Always zero
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
