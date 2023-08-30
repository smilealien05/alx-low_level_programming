#include"main.h"


/**
 * factorial - function that return a facturial of agiven namber
 * @n: integer var
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
