#include "main.h"
#include <stdlib.h>




/**
  *
  *
  *
  *
  */
char **strtow(char *str)
{
	int i = 0, j = 0;
	char **s;

	if (str == 0)
	{
		return (0);
	}

	while (str[i])
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			count++;
		}
		i++;
	}

	s = malloc(sizeof(*str) * count)
	for (i = 0; i < count; i++)
	{
		s[i] = malloc(sizeof())

