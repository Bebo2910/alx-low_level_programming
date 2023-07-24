#include "main.h"

/**
  *rev_string - function to reverse a string
  * Return: none
  * @s: string
  *
  *
  */
void rev_string(char *s)
{
	int i, l;
	char temp;

	for (i = 0; *s != '\0'; i++)
		;

	for (l = 0; l < i / 2; l++)
	{
		temp = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = temp;
	}
}
