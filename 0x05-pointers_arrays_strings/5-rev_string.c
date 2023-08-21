#include"main.h"

/**
 * rev_string - a function reverse a string
 * @s : a string variable
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int end;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	end = i - 1;
	while (end > j)
	{
		temp = s[j];
		s[j] = s[end];
		s[end] = temp;

		end--;
		j++;
	}
}
