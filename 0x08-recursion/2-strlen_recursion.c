#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: pointer that mean a variable of function
 * Return: intiger
 */

int _strlen_recursion(char *s)
{
int n = 0;
if (*s)
{
n++;
n = n + _strlen_recursion(s + 1);
}
return (n);
}
