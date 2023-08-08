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
	char *dip = malloc(sizeof(str));

	if (dip == 0)
	{
		return (0);
	}
	int i;

	i = 0;
	while (str[i])
	{
		dip[i] = str[i];
		i++;
	}

	return (dip);
}
