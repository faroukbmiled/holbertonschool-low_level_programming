#include "dog.h"
#include <stdio.h>
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
dog_t *x;
int n, o;
n = strlen(name);
o = strlen(owner);
x = malloc(sizeof(dog_t));
if (x == NULL)
return (NULL);
x->name = malloc(sizeof(char) * (n + 1));
if (x->name == NULL)
{
free(x);
return (NULL);
}
x->owner = malloc(sizeof(char) * (o + 1));
if (x->owner == NULL)
{
free(x);
free(x->name);
return (NULL);
}
strcpy(x->name, name);
strcpy(x->owner, owner);
x->age = age;
return (x);
}
