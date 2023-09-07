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
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of located substring
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int i;

for (i = 0; haystack[i] != '\0'; i++)
{
if (_strchr(haystack + i, needle[0]) != 0)
{
return (haystack + i);
}
}
return (0);
}
