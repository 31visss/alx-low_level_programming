#include "dog.h"
#include <stdio.h>

/*
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * Return: nill if an element of d is null and nothing if d is null
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("%s\n", d->name);
	printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	}
}
