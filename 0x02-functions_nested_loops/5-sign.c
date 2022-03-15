#include <stdio.h>
#include "main.h"
/**
 *print_sign - entry point
 *@n: a letter
 *
 *Description: checks if a letter is in uppercase
 *Return: either 1 or 0
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+1");
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
};
return (0);
}
