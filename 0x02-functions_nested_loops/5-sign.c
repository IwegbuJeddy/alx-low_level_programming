#include "main.h"
/**
 * print_sign - Determines if the input
 * greater, iqual or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * * -1 is less than zero.
*/
int print_sign(int n)
{
if (n > 0)
{
return (0);
_putchar(43);
}
else if (n == 0)
{
return (0);
_putchar(48);
}
else
{
return (-1);
_putchar(45);
}
_putchar('\n');
}
