#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to a variable of type struct dog;
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: a pointer to a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
