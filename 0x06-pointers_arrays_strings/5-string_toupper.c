#include"main.h"

/**
 * string_toupper -  function that changes all lowercase to uppercase
 * @str: a string variable
 * Return: a upper string
*/

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] <= 'z' && str[i] >= 'a')
{
str[i] = str[i] - 32;
}
else if (str[i] <= 'Z' && str[i] >= 'A')
{
continue;
}
else
{
continue;
}
}
return (str);
}
