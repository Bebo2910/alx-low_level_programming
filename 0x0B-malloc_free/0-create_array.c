#include "main.h"

/**
  * create_array - function to make array
  * @size: the size of the array
  * @c: the char to put
  * Return: null or array
  *
  */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	int i;
	char *s = malloc(size);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
