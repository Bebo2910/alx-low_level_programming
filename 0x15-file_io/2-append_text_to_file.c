#include "main.h"

/**
  * _strlen - function
  * @s: s
  * Return: return i
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * append_text_to_file - append
  * @filename: filename
  * @text_content: text
  * Return: return 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes, len;

	if (!filename || !text_content)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	len = _strlen(text_content);
	bytes = write(file, text_content, len);

	if (bytes == 0)
	{
		return (-1);
	}

	return (1);
}
