#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ldig = n % 10;
if (ldig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
}
else if (ldig == 0)
printf("Last digit of %d is 0 and is %d\n", n, ldig);
else if (ldig < 6 && ldig != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
return (0);
}
