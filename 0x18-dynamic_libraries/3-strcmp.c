#include "main.h"

/**
  * _strcmp - string compare
  * @s1: string 1
  * @s2: string 2
  * Return: diff
  *
  */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (diff);
}
