#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a fct that returns a pointer to a newly allocated space in memory
 * @str: a pointr of string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dpl;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dpl = malloc(sizeof(char) * (i + 1));
	if (dpl == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		dpl[r] = str[r];
	return (dpl);
}
