#include "main.h"
/**
 * print_triangle - function that prints a square
 * @size: the size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b == (size - ))
					_putchar('')
				_putchar(' ');
				if (b == (size - 1) && a == (size - 1))
					break;
				else if (b == (size - 1))
					_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
