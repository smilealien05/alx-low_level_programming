#include "main.h"

/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int arrsize = nmemb * size;
unsigned int b;

if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(arrsize);
if (a == NULL)
return (NULL);
for (b = 0; b < arrsize; b++)
{
a[b] = 0;
}
return (a);
}

