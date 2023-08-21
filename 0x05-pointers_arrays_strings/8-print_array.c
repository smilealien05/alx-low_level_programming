#include"main.h"
#include<stdio.h>
/**
 * print_array - a function print array
 * @a: int point the adress of arr
 * @n: int variable save the legth of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		} else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
