#include "main.h"

/**
 * _pow_recursion- a function that returns the power
 * @x:variable de fonction
 * @y:variable de fonction
 * Return: int
*/


int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
