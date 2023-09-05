#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to new string, or NULL if str = NULL
 */

char *_strdup(char *str)
{
char *dup_str;
int i, str_len = 0;

if (str == NULL)
return (NULL);

while (str[str_len] != '\0')
{
str_len++;
}

dup_str = malloc(sizeof(char) * (str_len + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; i < str_len; i++)
{
dup_str[i] = str[i];
}

dup_str[str_len] = '\0';

return (dup_str);
}
