#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: variable save the number of _
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}

