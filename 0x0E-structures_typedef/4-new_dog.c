#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *x, char *y);
/**
 * new_dog - makes a new dog, memory and all
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL)
	{
		d->name = NULL;
	}
	else
	{

		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = _strcpy(d->name, name);
	}
	if (owner == NULL)
	{
		d->owner = NULL;
	}
	else
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(d->owner, owner);
	}
		d->age = age;
	return (d);
}
