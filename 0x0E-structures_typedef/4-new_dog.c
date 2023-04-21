#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int l1, l2, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (l1 = 0; name[l1]; l1++)
		;
	l1++;
	dog->name = malloc(l1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < l1; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (l2 = 0; owner[l2]; l2++)
		;
	l2++;
	dog->owner = malloc(l2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < 2; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
