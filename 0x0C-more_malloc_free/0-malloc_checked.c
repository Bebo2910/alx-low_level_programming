#include "main.h"
#include <stdlib>

/**
  * malloc_checked - function
  * @b: size
  * Return: m or 98
  *
  *
  */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
	{
		exit(98);
	}

	return(m);
}
