#include <stdio.h>
#include "main.h"
/**
 *_isalpha - entry point
 *@c: a letter
 *
 *Description: checks if a letter is in uppercase
 *Return: either 1 or 0
 */
int _isalpha(int c)
{
char a;
for (a = 'A'; a <= 'Z'; a++)
{
if (c == a)
{
return (1);
}
else
{
return (0);
};
};
return (0);
}
