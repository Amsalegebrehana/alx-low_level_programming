#include "holberton.h"
/**
*puts_half - print second half of a string
*@str: char array string type
*Description: If odd number of chars, print (length - 1) / 2
*/
void puts_half(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
j = i / 2;
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
