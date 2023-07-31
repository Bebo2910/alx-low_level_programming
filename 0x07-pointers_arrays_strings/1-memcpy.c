#include "main.h"

/**
  * _memcpy - function to be used for copying
  * @dest: palintext
  * @src: copying material
  * @n: the number used
  * Return: the plaintext with the copy
  *
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
