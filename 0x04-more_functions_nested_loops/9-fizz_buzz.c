#include<stdio.h>

/**
 * main - The “Fizz-Buzz test”
 * Return: 0 while run the programm
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	printf(" ");
	}
	printf("\n");
	return (0);
}