#include "main.h"

/**
  * print_rev - print reversely
  * Return: none
  * @s: pointer holds string
  *
  */
void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

