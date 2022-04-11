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
	int i, len_name, len_owner;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}
	for (len_name = 0; name[len_name] != '\0'; len_name++)
		;
	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
		;
	my_dog->name = malloc(len_name + 1);
	my_dog->owner = malloc(len_owner + 1);
	if (!(my_dog->name) || !(my_dog->owner))
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		my_dog->name[i] = name[i];
	my_dog->age = age;
	for (i = 0; i < len_owner; i++)
		my_dog->owner[i] = owner[i];
	return (my_dog);
}
