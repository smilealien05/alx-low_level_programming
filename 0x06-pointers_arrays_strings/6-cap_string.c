#include"main.h"

/**
 * cap_string -  function that capitalize all string
 * @str: a string variable
 * Return: a upper string
*/

char *cap_string(char *str)
{
int i;
int j;
char separators[] = " \t\n,;.!?\"(){}";
if (str[0] <= 'z' && str[0] >= 'a')
{
str[0] = str[0] - 32;
}
for (i = 1; str[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (separators[j] == str[i])
{
if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
{
str[i + 1] = str[i + 1] - 32;
}
}
}
}
return (str);
}
