#include "holberton.h"
#include "2-strlen.c"
/**
*print_rev - prints reversed string, followed by a new line
*@s: pointer to the string to print
*Return: void
*/
void print_rev(char *s)
{
int i;
i = _strlen(s) - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
