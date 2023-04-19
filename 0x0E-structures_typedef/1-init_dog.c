#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initiate struct
 * @d: struct of dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
