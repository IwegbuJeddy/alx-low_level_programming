#include <stdio.h>
/*Betty style documentation goes here*/
/* betty style doc for function main goes there */
/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: 0
*/
int main(void)
{
char n;
char nCaps;
for (n = 'a'; n <= 'z'; ++n)
{
putchar(n);
}
for (nCaps = 'A'; nCaps <= 'Z'; ++nCaps)
{
putchar(nCaps);
}
putchar('\n');
return (0);
}
