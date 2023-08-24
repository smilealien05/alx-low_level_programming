#include"main.h"

/**
 * print_number - function that print integer
 * @n: variable integer
 * Return: void
*/

void print_number(int n)
{
int divisor = 1;
int temp = 0;
int i;
if (n < 0)
{
_putchar('-');
n = -n;
}
temp = n;
while (temp > 9)
{
divisor *= 10;
temp /= 10;
}
while(divisor > 0)
{
i = (n/divisor) % 10;
_putchar(i + '0');
divisor /= 10;
}
}
