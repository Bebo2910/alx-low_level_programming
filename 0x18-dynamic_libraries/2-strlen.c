#include "main.h"

/**
  * _strlen - function to process
  * Return: len value.
  * @s: string to count
  *
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
