#include"main.h"

/**
 * _strcpy - Write a function that copies the string in another
 * @dest: string variable
 * @src: string variable
 * Return: a char copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
