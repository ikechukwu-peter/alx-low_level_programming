#include <stdio.h>
#include "main.h"
/**
 *_islower - entry point
 *@c: a letter
 *
 *Description: checks if a letter in in lowercase
 *Return: either 1 or 0
 */
int _islower(int c)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (c == a)
{
return (1);
}
else
{
return (0);
};
}
}
