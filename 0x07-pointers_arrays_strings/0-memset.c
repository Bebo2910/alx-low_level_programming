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
	int i = 0;

	for (; n < 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
