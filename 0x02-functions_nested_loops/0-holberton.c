#include "holberton.h"
/**
* main - Entry block
* Description: prints holberton on new line
* Return: 0
*/
int main(void)
{
char s[10] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(s[i]);
}
_putchar('\n');

return (0);
}
