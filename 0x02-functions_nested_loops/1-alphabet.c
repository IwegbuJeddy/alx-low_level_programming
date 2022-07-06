#include "main.h"
/**
* print_alphabet - a function that prints the alphabet,
* in lowercase, followed b a new line
*
* Return: zero (Success)
*/
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
