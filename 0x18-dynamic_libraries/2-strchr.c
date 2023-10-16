#include "main.h"

/**
  * _strchr - function to start a string from a point
  * @s: the string
  * @c: the point
  * Return: the new address or the point or 0.
  *
  *
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}

