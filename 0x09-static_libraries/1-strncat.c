#include "main.h"

/**
  * _strncat - function to merge
  * Return: dest
  * @n: number of chars
  * @dest: editable string
  * @src: string to be merged
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, l, len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (len = 0; src[len]; len++)
		;
	if (n > len)
	{
		n = len;
	}
	for (l = 0; l < n; l++)
	{
		dest[i + l] = src[l];
	}
	dest[i + l] = '\0';

	return (dest);
}
