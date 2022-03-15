#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - entry point
 *@n: int to find the last digit of
 *Description: Prints the last digit of int to the terminal
 *Return: Alwasy 0
 */
int print_last_digit(int n)
{
int c;
c = n % 10;
printf("%d", c);
return (c);
}

