#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers -> this prints most numbers
 *Returns: Void.
*/
void print_most_numbers(void)
{
int ch = 0;
for (; ch < 10; ch++)
{
if (ch != 2 && ch != 4)
{
_putchar(ch + '0');
}
}
_putchar ('\n');
}
