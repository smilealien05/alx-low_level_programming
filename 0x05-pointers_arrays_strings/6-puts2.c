#include"main.h"

/**
 * puts2 - a function that print every other char of str
 * @str: variable string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
