#include "main.h"

/**
  *_puts - puts a string
  * Return: none
  * @str: string to be printed
  *
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
