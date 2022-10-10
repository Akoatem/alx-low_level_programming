#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 *
 * Return: NULL if fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, count, peter;
	struct dog *ptr_dog = NULL;

	count = 0;
	while (name[count] != '\0')
		count++;
	count = 0;
	while (name[peter] != '\0')
		peter++;
	ptr_dog = malloc(sizeof(struct dog));
	if (ptr_dog == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->name = malloc(peter + 1);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = malloc(count + 1);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	i = 0;
	while (i <= peter)
	{
		ptr_dog->name[i] = name[i];
		peter++;
	}
	i = 0;
	while (i <= count)
	{
		ptr_dog->owner[i] = owner[i];
		count++;
	}
	ptr_dog->age = age;
	return (ptr_dog);
}
