#include"main.h"
/**
 * _strncat - function that concatinait between two strings
 * @dest: variable sring
 * @src: bvariabble string
 * @n: intiger
 * Return: pointer of string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j != n)
		{
			dest[i] = src[j];
			i++;
			j++;
		} else
		{
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
