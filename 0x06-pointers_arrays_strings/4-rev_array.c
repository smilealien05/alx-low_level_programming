#include"main.h"
/**
 * reverse_array - function reverse array
 * @a: array 
 * @n: intiger that mean size of case in array
 * Return: void
*/
void reverse_array(int *a, int n)
{
int start = 0;
int i;

while (start < n)
{
i = a[start];
a[start] = a[n];
a[n] = i;
n--;
start++;
}
}
