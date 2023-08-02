#include "main.h"

/**
  * is_right - the function to test
  * @s: the string
  * @size: the size
  * @i: the number of array
  * Return: 1 0r 0
  */
int is_right(char *s, int size, int i)
{
	if (i == size / 2)
	{
		return (1);
	}
	if (s[i] != s[size - 1 - i])
	{
		return (0);
	}
	is_right(s, size, i + 1);
}
/**
  * is_palindrome - the function to simi
  * @s: string to test
  * Return: 1 or 0
  *
  *
  */

int is_palindrome(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (is_right(s, i, 0));
}
