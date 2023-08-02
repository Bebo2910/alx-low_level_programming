#include "main.h"

/**
  * _puts_recursion - the function to put a string
  * @s: the string
  * Return: none
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
