#include "main.h"

/**
  * is_right - the function to test
  * @s: the string
  * @size: size of string
  * @i: the number of array
  * Return: 1 0r 0
  */
int is_right(char *s, int size, int i)
{
	if (i < size / 2)
	{
		if (s[i] != s[size - 1 - i])
		{
			return (0);
		}
		return (is_right(s, size, i + 1));
	}
	return (1);
}

/**
  * size - finding size of string
  * @s: the string
  * Return: size
  *
  */

int size(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n += size((s + 1)) + 1;
	}

	return (n);
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
	int n;

	n = size(s);
	return (is_right(s, n, 0));
}
