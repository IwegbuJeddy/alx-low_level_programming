#include "main.h"
/**
 *print_most_numbers -> this prints most numbers
*/
void print_most_numbers(void)
{
int ch = 48;
for (; ch < 58; ch++)
{
if (ch != 50 || ch != 52)
{
_putchar(ch);
}
}
_putchar ('\n');
}
