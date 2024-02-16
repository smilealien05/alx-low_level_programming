#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
        int i, d, n, len, f, digit;

        i = 0;
        d = 0;
        n = 0;
        len = 0;
        f = 0;
        digit = 0;
        while (s[len] != '\0')
                len++;
        while (i < len && f == 0)
        {
                if (s[i] == '-')
                        ++d;
                if (s[i] >= '0' && s[i] <= '9')
                {
                        digit = s[i] - '0';
                        if (d % 2)
                                digit = -digit;
                        n = n * 10 + digit;
                        f = 1;
                        if (s[i + 1] < '0' || s[i + 1] > '9')
                                break;
                        f = 0;
                }
                i++;
        }
        if (f == 0)
                return (0);
        return (n);
}
/**
 * main -  prints the minimum nmbr of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num;
	int cmpt = 0;

	if(argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	if(num < 0)
	{
		printf("0\n");
		return (0);
	}
	if(num >= 25)
	{
		cmpt += (num / 25);
		num %= 25;
	}
	if(num >= 10)
        {       
                cmpt += (num / 10);
                num %= 10;
        }
	if(num >= 5)
        {
                cmpt += (num / 25);
                num %= 25;
        }
	if(num >= 2)
        {
                cmpt += (num / 2);
                num %= 2;
        }
	if(num >= 1)
        {
                cmpt += (num / 1);
                num %= 1;
        }
	printf("%d\n", cmpt);
	return (0);
}
