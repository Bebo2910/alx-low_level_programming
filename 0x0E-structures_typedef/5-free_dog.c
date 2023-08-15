#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free a dog
  * @d: the dog to be freed
  * Return: void
  *
  */
void free_dog(dog_t *d)
{
	free(dog->name);
	free(dog->age);
	free(dog->owner);
	free(dog);
}
