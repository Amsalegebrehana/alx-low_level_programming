#include "holberton.h"
/**
* _strlen - find the length of a string
* @s: pointer to the string to check
* Return: void
*/
int _strlen(char *s)
{
int k = 0;
while (*s != '\0')
{
k++;
s++;
}
return (k);
}
