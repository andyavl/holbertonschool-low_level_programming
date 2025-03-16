#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: firulais name
 * @age: firulais age
 * @owner: firulais owner
 * Return: NULL if malloc fails, else returns new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, n, o;
	dog_t *doggo;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	for (n = 0; name[n] != '\0'; n++)
	{}
	(*doggo).name = malloc(n * sizeof(char));
	if ((*doggo).name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		(*doggo).name[i] = name[i];

	(*doggo).age = age;

	for (o = 0; owner[o] != '\0'; o++)
	{}
	(*doggo).owner = malloc(o * sizeof(char));
	if ((*doggo).owner == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (j = 0; j < o; j++)
		(*doggo).owner[j] = owner[j];

	return (doggo);
}
