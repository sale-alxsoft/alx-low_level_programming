#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - create a fuction of type dog_t
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * Return: a pointer of data type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
