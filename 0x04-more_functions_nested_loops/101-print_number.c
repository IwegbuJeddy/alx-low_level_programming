#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/**
 * print_number - like a hello world
 *
 * @k: parameters an integer
 *
 * No return
 */
void print_number(int n)
{
unsigned int k = 0;
if  (k < 0)
{
k = -n;
_putchar('-');
}
else
{
k = n;
}
if (k / 10)
{
print_number(k / 10);
}
_putchar((k % 10) + '0');
}
