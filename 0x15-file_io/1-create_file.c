#include "main.h"

/**
  * _strlen - function
  * @s: s
  * Return: i
  *
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * create_file - function to make file
  * @filename: filename
  * @text_content: text
  * Return: -1 or 0
  *
  */
int create_file(const char *filename, char *text_content)
{
	int file, bytes, len;

	if (!filename || !text_content)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	len = _strlen(text_content);
	bytes = write(file, text_content, len);

	if (!bytes)
	{
		return (-1);
	}
	close(file);
	return (0);
}
