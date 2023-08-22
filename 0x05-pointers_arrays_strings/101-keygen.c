#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that generates random valid password
 * Return: 0 when the crakk passe successfuly
 */

int main(void)
{
	int pass[100];
	int i;
	int sum = 0;
	int n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
