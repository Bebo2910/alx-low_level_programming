#include "main.h"

/**
  * _strncpy - function for replacing
  * @dest: the raw string
  * @src: the string
  * @n: the number of letters to replace
  * Return: the string
  *
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i, l;


	while (src[i] != '\0')
	{
		i++;
	}

	if (n > i)
	{
		n = i;
	}

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	dest[n] = '\0';

	return (dest);
}
