#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: integer
 * @argv: list of character
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	printf('\n');
	return (0);
}
