#include "main.h"
#include <stdlib.h>

/**
  * _strlen - function to find lenght
  * @s: string to find lenght
  * Return: strlen
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != ' '; i++)
		;
	return (i);
}

/**
  * argstostr - function to make
  * @ac: number of columns
  * @av: pointer to pointer
  * Return: 0 or string
  *
  */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, totalsize = 0, index = 0, n = 0;

	if (ac == 0 || av == 0)
	{
		return (0);
	}

	for (; i < ac; i++, totalsize++)
	{
		totalsize += _strlen(av[i]);
	}

	s = malloc(sizeof(char) * totalsize + 1);

	for (; n < ac; n++)
	{
		for (; av[n][j] != '\0'; j++, index++)
		{
			s[index] = av[n][j];
		}
		s[index] = '\n';
		index++;
	}

	return (s);
}
