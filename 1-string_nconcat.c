#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: pointer to new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i, j, s1_len = 0, s2_len = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;

if (n >= s2_len)
n = s2_len;

new_str = malloc(sizeof(char) * (s1_len + n + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
new_str[i] = s1[i];
for (j = 0; j < n; j++)
new_str[i + j] = s2[j];

new_str[s1_len + n] = '\0';

return (new_str);
}
