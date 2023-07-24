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

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
