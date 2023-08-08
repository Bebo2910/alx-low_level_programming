#include "main.h"
#include <stdlib.h>

/**
  * create_array - function to make array
  * @size: the size of the array
  * @c: the char to put
  * Return: null or array
  *
  */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s = malloc(size);

	if (size == 0 || s == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
