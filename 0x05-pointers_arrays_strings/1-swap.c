#include "main.h"
void swap_int(int *a, int *b)
{
 /**
 * swap_int - swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
}
