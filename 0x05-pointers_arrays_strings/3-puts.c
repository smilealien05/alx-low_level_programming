#include"main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line
 * @str : a string which we want to prints
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
