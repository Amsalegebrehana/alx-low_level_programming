#include "holberton.h"
/**
*print_line - check for a digit
*@n : number of _ to be printed
*Return:void
*/
void print_line(int n)
{
int i;
if (n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
