#include "main.h"

/**
  *_strspn - the function to count
  * @s: the string
  * @accept: the test plaintext
  * Return: count of letters
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, j;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}

	return (count);
