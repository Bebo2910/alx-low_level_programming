#include "main.h"

/**
  *_memset - function to function
  *@s: the array
  *@b: the char to be used
  *@n: the lenght of the array to put
  *Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
