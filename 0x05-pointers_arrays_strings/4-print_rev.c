#include "main.h"

/**
  * print_rev - print reversely
  * Return: none
  * @s: pointer holds string
  *
  */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

