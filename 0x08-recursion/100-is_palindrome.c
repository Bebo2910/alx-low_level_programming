#include "main.h"

/**
  * is_right - the function to test
  * @s: the string
  * @i: the number of array
  * Return: 1 0r 0
  */
int is_right(char *s, int i)
{
	if (s[i + 1])
	{
		if (s[i] != s[-1 - i])
		{
			return (0);
		}
		return (is_right(s, i + 1));
	}
	return (1);
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
	return (is_right(s, 0));
}
