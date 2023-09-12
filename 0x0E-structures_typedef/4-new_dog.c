
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i = 0, j = 0, k, l;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
while (name[i] != '\0')
{
i++;
}
while (owner[j] != '\0')
{
j++;
}

new_dog->name = malloc(sizeof(char) * (i + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(char) * (j + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (k = 0; k <= i; k++)
{
new_dog->name[k] = name[k];
}
for (l = 0; l <= j; l++)
{
new_dog->owner[l] = owner[l];
}
new_dog->age = age;
return (new_dog);
}
