#include"main.h"

/**
 *more_numbers - func. print from 0 to 14, 10 time
 * Return: void
 */

void more_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			} else
			{
				_putchar(a + '0');
			}
			a++;
		}
		_putchar('\n');
	}
}
