#include"main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: a string variable
 * Return: a character
*/

char *rot13(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
char c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
str[i] = (c - base + 13) % 26 + base;
}
}
return (str);
}
