#include "main.h"

/**
  * rot13 - function to encode
  * Return: n after encryption
  * @n: plaintext
  *
  *
  *
  */
char *rot13(char *n)
{
	int i, j;

	char s1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char s2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
			else if (n[i] == s2[j])
			{
				n[i] = s1[j];
			}
		}
	}

	return (n);
}
