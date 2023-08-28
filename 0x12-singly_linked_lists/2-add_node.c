#include "lists.h"

/**
  *_strlen - func
  * @s: char
  * Return: return string chars
  *
  */

int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

/**
  * add_node - fucn
  * @head: head
  * @str: string
  * Return: string
  *
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new || !head)
	{
		return (NULL);
	}

	if (str)
	{
		new->str = malloc(sizeof(char) * _strlen(str));
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}

	new->next = *head;
	*head = new;
	return (new);
}
