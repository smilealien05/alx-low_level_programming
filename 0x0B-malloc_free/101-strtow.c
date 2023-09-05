#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
char **words;
int i, j, k, l, wc = 0, len = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

while (str[len] != '\0')
len++;

words = malloc(sizeof(char *) * (len + 1));

if (words == NULL)
return (NULL);

for (i = 0; i < len; i++)
{
if (str[i] != ' ')
{
j = i;
wc++;
while (str[i] != ' ' && str[i] != '\0')
i++;
words[wc - 1] = malloc(sizeof(char) * (i - j + 1));
if (words[wc - 1] == NULL)
{
for (k = 0; k < wc; k++)
free(words[k]);
free(words);
return (NULL);
}
for (l = 0; l < (i - j); l++)
words[wc - 1][l] = str[j + l];
words[wc - 1][l] = '\0';
}
}
words[wc] = NULL;
return (words);
}
