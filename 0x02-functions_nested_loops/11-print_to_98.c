#include <stdio.h>
/**
* print_to_98 - prints numbers to 98
* @n : Starting integer
* Description : Prints numbers from n to 98
* Return:void
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d ", n);
n++;
}
}
else if (n > 98)
{
while (n < 98)
{
printf("%d ", n);
n--;
}
}
}
