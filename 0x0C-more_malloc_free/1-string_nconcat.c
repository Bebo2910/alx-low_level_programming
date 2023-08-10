#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;


	s = malloc(size1 + n + 1);

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
