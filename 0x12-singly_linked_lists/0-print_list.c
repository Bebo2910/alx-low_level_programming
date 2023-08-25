#include "lists.h"

/**
  * _strlen - find the len
  * @s: string
  * Return: string size
  *
  *
  */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * print_list - func
  * @h: h
  * Return: i on suc
  *
  *
  *
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
