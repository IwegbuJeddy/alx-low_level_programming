#include "main.h"
/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
*/
void print_diagonal(int n)
{
int k, l;
for (k = 0; k < n; k++)
{
for (l = 0; l < k; l++)
{
_putchar(' ');
}
_putchar(92);
if (k < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
