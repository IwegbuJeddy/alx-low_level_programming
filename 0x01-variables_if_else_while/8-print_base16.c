#include <stdio.h>
/* Betty docs */
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main(void)
{
int num;
char let;
for (num = 0; num < 10; ++num)
{
putchar(num + '0');
}
for (let = 'a'; let <= 'f'; ++let)
{
putchar(let);
}
putchar('\n');
return (0);
}
