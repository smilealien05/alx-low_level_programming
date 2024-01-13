#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: integer
 * @argv: list of character
 * Return: always 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	printf('\n');
	return (0);
}
