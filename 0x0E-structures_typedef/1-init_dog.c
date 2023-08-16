#include "dog.h"
/**
 * init_dog - function to initiate struct
 * @d: struct of dog declared
 * @name: first member of the struct
 * @age: second member of the struct
 * @owner: third member of the struct
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
