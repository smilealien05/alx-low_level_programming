#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: 0 if the number of arguments passed is not exactly 1,
 * otherwise 1
 * if the number passed as the argument is negative, print 0
*/

int main(int argc, char *argv[])
{
int i, cents, coins = 0;
int values[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
coins += cents / values[i];
cents = cents % values[i];
}
printf("%d\n", coins);
return (0);
}
