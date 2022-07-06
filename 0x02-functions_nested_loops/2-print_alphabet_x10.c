#include "main.h" 
/**
* print_alphabet_x10 - print alphabet
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int c;
int count;
count = 0;
while (count < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
count++;
_putchar('\n');
}
}
