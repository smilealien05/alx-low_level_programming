#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Description: aloocate memory for name and owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
int i = 0, j = 0, k, l;

if (d == NULL)
{
return;
}
while (name[i] != '\0')
{
i++;
}
while (owner[j] != '\0')
{
j++;
}

d->name = malloc(sizeof(char) * (i + 1));
if (d->name == NULL)
{
return;
}
d->owner = malloc(sizeof(char) * (j + 1));
if (d->owner == NULL)
{
free(d->name);
return;
}
for (k = 0; k <= i; k++)
{
d->name[k] = name[k];
}
for (l = 0; l <= j; l++)
{
d->owner[l] = owner[l];
}

d->age = age;
}
