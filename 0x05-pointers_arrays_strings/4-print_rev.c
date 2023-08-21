#include"main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s : a string return its length
 * Return: the length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
 * print_rev - function that prints a string, in reverse
 * @s : a string variable
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
