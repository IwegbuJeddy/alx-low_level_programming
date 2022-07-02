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
do {
putchar(num);
++num;
} while (num < 10);
do {
putchar (let);
} while (let > 'a' && let <= 'f');
putchar('\n');
return (0);
}
