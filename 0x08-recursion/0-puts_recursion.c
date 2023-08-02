#include "main.h"

/**
  * _puts_recursion - the function to put a string
  * @s: the string
  * Return: none
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
		return;
	}

	_putchar(s);
	*s += 1;
	_puts_recursion(*s);
}
