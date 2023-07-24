#include "main.h"

/**
  * puts_half - function to print half
  * Return: none
  * @str: string to be cut
  *
  *
  */
void puts_half(char *str)
{
	int len, count;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 == 0)
	{
		count = len / 2;
	}
	else
	{
		count = (len - 1) / 2;
	}

	while (count--)
	{
		_putchar(str[len - 1 - count]);
	}
	_putchar('\n');
}

