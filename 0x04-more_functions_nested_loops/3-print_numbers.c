#include"main.h"

/**
 *print_numbers - func. print from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
