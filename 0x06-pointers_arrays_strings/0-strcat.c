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
	int i, l, count;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (l = 0; dest[i] != '\0'; l++)
		;
	for (count = 0; count < i; count++)
	{
		dest[l + count] = src[count];
	}
	dest[l + count] = '\0';

	return (dest);

}
