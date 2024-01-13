#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: integer
 * @argv: list of character
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char const *argv[])
{

	printf("%s", argv[0]);
	printf('\n');
	return (0);
}
