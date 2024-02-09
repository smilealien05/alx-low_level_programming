#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @b: base of the exponent
 * @p: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= p; a++)
		n *= b;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

