#include <stdio.h>
/*Betty style doc here*/
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
char n;
for (n = 'z'; n >= 'a'; --n)
{
putchar(n);
}
putchar('\n');
return (0);
}
