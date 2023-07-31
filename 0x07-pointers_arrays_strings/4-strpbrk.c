#include "main.h"

/**
  * _strpbrk - function to return string
  * Return: remainder or null
  * @s: the plaintext
  * @accept: the copy test text
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (0);
}
