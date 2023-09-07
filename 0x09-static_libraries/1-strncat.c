#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 *
 *
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';

return (dest);
}

