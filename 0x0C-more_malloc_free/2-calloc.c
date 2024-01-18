#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}
int *ar = (int *) malloc(size * nmemb);
if (ar == NULL)
{
return (NULL);
}
if (ar != NULL)
{
memset(ar, 0, nmemb * size);
}
return (ar);
}
