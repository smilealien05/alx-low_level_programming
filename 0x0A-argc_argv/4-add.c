#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers &
 *  Print the result, followed by a new line
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to the arguments
 * Return: return 1 If one of the number
 * contains symbols that are not digits.
 * Otherwise - 0
 */

int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
