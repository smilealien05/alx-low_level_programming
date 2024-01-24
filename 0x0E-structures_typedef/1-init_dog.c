#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize with
 * @age: age to initialize with
 * @owner: owner to initialize with
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
