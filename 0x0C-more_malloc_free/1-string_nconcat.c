#include "main.h"
#include <stdlib.h>

/**
  * _strlen - function
  * @s: len
  * Return: len 2
  *
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
  * string_nconcat - function
  * @s1: string 1
  * @s2: string 2
  * @n: the appropriate len of 2
  * Return: 0 or s
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j;

	if (n > _strlen(s2))
	{
		n = _strlen(s2);
	}

	s = (char *)malloc(sizeof(*s1) + n + 1);

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\0';

	return (s);
}
