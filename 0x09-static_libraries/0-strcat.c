#include "main.h"

/**
  *_strcat - function to merge strings
  * @dest: string of merge
  * @src: string to be merged
  * Return: merged string
  *
  */
char *_strcat(char *dest, char *src)
{
	/*finding the length of the string*/
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
