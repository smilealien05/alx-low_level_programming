#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c in s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (0);
}
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to substring
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (_strchr(accept, s[i]) != 0)
{
return (s + i);
}
}
return (0);
}
