#include "main.h"

/**
  * _strlen_recursion - function to count
  * @s: the string
  * Return: strlen or 0.
  */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s)
	{
		return (i + _strlen_recursion(s + 1));
	}

	return (0);
}
