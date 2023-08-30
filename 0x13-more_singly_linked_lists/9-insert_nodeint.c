#include "lists.h"

/**
  * insert_nodeint_at_index - function
  * @head: head
  * @idx: index
  * @n: n
  * Return: new
  *
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buffer = *head, *new = malloc(sizeof(listint_t));
	int i = 0;

	if (!new || !head)
	{
		return (NULL);
	}

	while (i < idx && buffer)
	{
		buffer = buffer->next;
		i++;
	}

	if (!buffer)
	{
		return (NULL);
	}

	new->n = n;
	new->next = buffer->next;
	buffer->next = new;
	return (new);
}
