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
	int i, l, loop, j, f;

	f = n;
	loop = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	if (n > i)
	{
		loop = n / i;
		f = i;
	}

	for (j = 0; j <= loop; j++)
	{
		for (l = 0; l < f; l++)
		{
			dest[l] = src[l];
		}
		dest[l] = '\n';
	}

	dest[n] = '\n';

	return (dest);
}
