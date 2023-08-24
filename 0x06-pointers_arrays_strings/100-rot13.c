#include"main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: a string variable
 * Return: a character
*/

char *rot13(char *str)
{
int i, j;
char *crt = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rev = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; crt[j] != '\0'; j++)
{
if (crt[j] == str[i])
{
str[i] = rev[j];
break;
}
}
}
return (str);
}
