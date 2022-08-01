#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new struct
 * @name: pointer to char value
 * @age: float value
 * @owner: pointer to char value
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, i = 0, j;
	dog_t *doge;

	while (name[n] != '\0')
		n++;
	while (name[i] != '\0')
		i++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	(*doge).name = malloc(n * sizeof((*doge).name));
	if ((*doge).name == NULL)
	{
		free((*doge).name);
		free(doge);
		return (NULL);
	}
	for (j = 0; j <= n; j++)
		(*doge).name[j] = name[j];
	(*doge).age = age;
	(*doge).owner = malloc(i * sizeof((*doge).owner));
	if ((*doge).owner == NULL)
	{
		free((*doge).owner);
		free((*doge).name);
		free(doge);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
		(*doge).owner[j] = owner[j];
	return (doge);
}
