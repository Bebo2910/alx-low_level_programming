#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - function
  * @n: is n
  * Return: i
  *
  */
int _strlen(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
		;

	return (i);
}

/**
  * _strcopy - function
  * @final: final
  * @src: source
  * Return: the final verison
  *
  */
char *_strcopy(char *final, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		final[i] = src[i];
	}

	return (final);
}

/**
  * new_dog - function
  * @name: name
  * @age: age
  * @owner: owner
  * Return: dog on success
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	dog = (dog_t *)malloc(sizeof(dog_t *));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
