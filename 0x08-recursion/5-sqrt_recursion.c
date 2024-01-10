#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that return the natural square root of a number
 * @n: function variable
 * Return: int
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square
 * @n: number to calculate the sqaure
 * @i: iterator
 * Return: int
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
return (actual_sqrt_recursion(n, i + 1));
}
