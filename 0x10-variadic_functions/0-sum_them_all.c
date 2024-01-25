#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @num_args: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int num_args, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	va_start(args, num_args);
	for (i = 0; i < num_args; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
