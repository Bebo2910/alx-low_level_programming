#include "main.h"

/**
  * _print_rev_recursion - function print string in rev
  * @s: the string to be printed
  * Return: none
  *
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
