#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - func
  * @nmemb: size
  * @size: size two
  * Return: 0 or s
  *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	s = calloc(nmemb, size);

	if (s == 0)
	{
		return (0);
	}

	return (s);
}
