#include "main.h"

/**
 * swap_int - a function swaps the value of  two int
 * @a : the first int variable that swipes
 * @b : the second int variable that swipes
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
