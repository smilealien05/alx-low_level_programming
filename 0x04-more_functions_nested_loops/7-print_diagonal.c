#include "main.h"
/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @n: variable save number of time
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			if (a == (n - 1))
				break;
			else
				_putchar('\n');
		}

	}
	_putchar('\n');
}
