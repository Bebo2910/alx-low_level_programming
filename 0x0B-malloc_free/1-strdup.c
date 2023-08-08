#include "main.h"
#include <stdlib.h>

/**
  * _strdup - fucntion to duplicate string
  * @str: string to plain
  * Return: 0 or string
  *
  */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *dip;

	if (str == 0)
	{
		return (0);
	}

	for (; str[size] != '\0'; size++)
		;

	dip = malloc(size * sizeof(*str) + 1);
	if (dip == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
		{
			dip[i] = str[i];
		}
	}
	return (dip);
}
