#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name to initialize with
 * @age: age to initialize with
 * @owner: owner to initialize with
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i, j, k, l;

new_dog = malloc(sizeof(dog_t));
if (new_dog == 0)
return (0);

for (i = 0; name[i] != 0; i++)
;
for (j = 0; owner[j] != 0; j++)
;
new_dog->name = malloc(i + 1);
if (new_dog->name == 0)
{
free(new_dog);
return (0);
}
new_dog->owner = malloc(j + 1);
if (new_dog->owner == 0)
{
free(new_dog->name);
free(new_dog);
return (0);
}
for (k = 0; k <= i; k++)
{
new_dog->name[k] = name[k];
}
new_dog->age = age;
for (l = 0; l <= j; l++)
{
new_dog->owner[l] = owner[l];

}
return (new_dog);
}
