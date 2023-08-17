#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			printf("%ld", i);
		} else
		{
			i++;
		}
	}
	printf("\n");
	return (0);
}

