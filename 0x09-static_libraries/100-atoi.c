#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer value of string
 *
 *
 */

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int num = 0;
int found = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign = sign * -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
found = 1;
}
else if (found == 1)
{
break;
}
i++;
}
return (num *sign);
}
