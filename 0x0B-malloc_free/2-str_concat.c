#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function to merge
  * @s1: string to make first
  * @s2: string to make second
  * Return: 0 or the array
  */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0, j = 0;
	char *total;

	if (s1 == 0)
	{
		s1 = '\0';
	}
	if (s2 == 0)
	{
		s2 = '\0';
	}

	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;

	total = malloc((size1 + size2) * sizeof(char) + 1);

	if (total == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size1; i++)
		{
			total[i] = s1[i];
		}

		for (; j < size2; j++)
		{
			total[i + j] = s2[j];
		}

		return (total);
	}
}
