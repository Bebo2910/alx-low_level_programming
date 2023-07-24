#include "main.h"

/**
  *_puts - puts a string
  * Return: none
  * @str: string to be printed
  *
  */

void _puts(char *str)
{
	int len;

	for (len = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
