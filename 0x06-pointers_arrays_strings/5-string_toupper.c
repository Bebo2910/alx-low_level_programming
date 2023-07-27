#include "main.h"

/**
  * string_toupper - function to uppercase text
  * @n: the string to be modified
  * Return: n
  *
  *
  *
  */
char *string_toupper(char *n)
{
	/*Know the lenght of the string*/
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
		}
	}

	return (n);
}
