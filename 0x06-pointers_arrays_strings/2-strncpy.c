#include"main.h"

/**
 * _strncpy - function that copy a string in another
 * @dest: destination string
 * @src: source strig
 * @n: integer that mean a number of character
 * Return: charactyer
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i != n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
