#include "main.h"

/**
  * _strcpy - function to copy string
  * @dest: string empty
  * @src: string full to be copied
  * Return: dest string
  *
  */

char *_strcpy(char *dest, char *src)
{
	int i, count;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (count = 0; count < i; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
