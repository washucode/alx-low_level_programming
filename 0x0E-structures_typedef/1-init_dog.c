#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - funtion to initialize dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 * @d : dog struct alias
 * Return: dog
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
