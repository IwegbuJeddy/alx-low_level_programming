#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers -> this prints most numbers
 *Returns: Void.
*/
void print_most_numbers(void)
{
int ch = 48;
for (; ch < 58; ch++)
{
if (ch != 50 || ch != 52)
{
_putchar(ch + '0');
}
}
_putchar ('\n');
}
