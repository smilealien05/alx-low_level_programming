#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: difference between strings
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int res = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
i++;
}
return (res);
}
