#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that takess a pointer to a struct dog
 * @d: variable for struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
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
