#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of arguments
 *
 * Return: pointer to new string, or NULL if error
 */

char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, total = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total++;
j++;
}
total++;
}

str = malloc(sizeof(char) * (total + 1));

if (str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}
