#include "lists.h"

/**
  * _strlen - func
  * @s: string
  * Return: len
  *
  */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

/**
  * add_node_end - function to add node
  * @head: old node
  * @str: new string to add
  * Return: new linked list
  *
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t new = malloc(sizeof(list_t));

	if (!new || !head)
	{
		return (0);
	}

	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (0);
		}
		new->len = _strlen(new->str);
	}

	new->next = *head;
	*head = new;
	return (new);
}
