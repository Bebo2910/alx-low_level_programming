#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int i, j, size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n > _strlen(s2))
	{
		n = _strlen(s2);
	}

	s = malloc(size1 + n + 1);

	if (s == NULL)
	{
		return (NULL);
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
