#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of bytes to be copied
 * Return: copied string
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (src[i] != '\0' && j < n)
{
dest[i] = src[i];
i++;
j++;
}
while (j < n)
{
dest[i] = '\0';
i++;
j++;
}
return (dest);
}
