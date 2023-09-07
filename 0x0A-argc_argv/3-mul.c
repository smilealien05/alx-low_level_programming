#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: return 1 If the program does not receive
 * two arguments. Otherwise - 0
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;
	printf("%d\n", res);
	return (0);
}
