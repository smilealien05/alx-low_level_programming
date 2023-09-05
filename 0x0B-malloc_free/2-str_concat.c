#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *new_str;
int i, j, s1_len = 0, s2_len = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;

new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
new_str[i] = s1[i];
for (j = 0; j < s2_len; j++)
new_str[i + j] = s2[j];

new_str[s1_len + s2_len] = '\0';

return (new_str);
}
