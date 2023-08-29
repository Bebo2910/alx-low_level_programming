#include "lists.h"

/**
  * add_nodeint - function
  * @head: head
  * @n: n
  * Return: return
  *
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *buffer = *head, *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	while (buffer->next)
	{
		buffer = buffer->next;
	}

	new->n = n;
	new->next = NULL;

	buffer->next = new;
	return (new);
}
