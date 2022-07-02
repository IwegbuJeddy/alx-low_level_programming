#include <stdio.h>
/*Betty style  documentation */
/**
 * main - putchar function to get lower and upper case alphabets
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; ++n)
{
if (n != 'e' && n != 'q')
{
putchar(n);
}
}
return (0);
}
