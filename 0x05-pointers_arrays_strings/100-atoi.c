#include"main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: variable
 * Return: intiger
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 0;
	int result = 0;

	for (i = 0; s[i] >= '9' || s[i] <= '0'; i++)
	{
		if (s[i] == '-')
			++sign;
		if (s[i] <= '9' && s[i] >= '0')
			break;
	}
	if (sign % 2  == 1)
	{
		sign = -1;
	} else
	{
		sign = 1;
	}
	while (s[i] != '\0')
	{
		if (s[i] <= '9' && s[i] >= '0')
		{
			result = result * 10 + (s[i] - '0');	
		} else
		{
			break;
		}
		i++;
	}
	return (sign * result);
}
