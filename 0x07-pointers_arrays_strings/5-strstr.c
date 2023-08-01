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
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *n = needle;

		while (*n == *p && *p != '\0')
		{
			p++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
