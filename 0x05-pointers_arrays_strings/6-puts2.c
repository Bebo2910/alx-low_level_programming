#include "main.h"

/**
  * puts2 - function to print
  * Return: none
  * @str: string
  *
  */
void puts2(char *str)
{
	int i, l;

	for (l = 0; *str != '\0'; l++)
		;

	for (i = 0; i <= l / 2; i++)
	{
		_putchar(s[i * 2]);
	}
	_putchar('\n');
}
