#include <stdio.h>
#include "main.h"
/**
 *_abs - entry point
 *@c: an int
 *
 *Description: checks if a letter is in uppercase
 *Return: either 1 or 0
 */
int _abs(int c)
{
int result;
if (c < 0)
result = -(c);
else
result = c;
return (result);
}
