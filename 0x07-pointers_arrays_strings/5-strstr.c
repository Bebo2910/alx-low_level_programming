#include "main.h"

/**
  *_strstr - function
  * @haystack: char string to compare
  * @needle: plaintext
  * Return: the string or zero
  *
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			char *p = haystack[i];
			char *n = needle;

			while (*n == *p && *p != '\0')
			{
				p++;
				n++;
			}

			if (*n == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (0);
}

