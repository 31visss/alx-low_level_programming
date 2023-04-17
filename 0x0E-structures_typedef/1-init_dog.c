#include "dog.h"
/*
 * init_dog - initializes a variable of type struct dog
 * @name: dog name
 * @age: age of dog
 * @owner: the dog's owner
 * @d: pointer pointing to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
