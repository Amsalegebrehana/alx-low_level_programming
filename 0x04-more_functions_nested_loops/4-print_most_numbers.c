#include "holberton.h"
/**
* print_numbers - prints numbers
* Return:0
*/
void print_most_numbers(void)
{
char i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
{
continue;
}
_putchar('0' + i);
}
_putchar('\n');
}
