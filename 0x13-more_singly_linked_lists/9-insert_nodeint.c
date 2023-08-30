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
	unsigned int i = 0;

	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (buffer)
	{
		if (i == idx - 1)
		{
			new->next = buffer->next;
			buffer->next = new;
			return (new);
		}
		i++;
		buffer = buffer->next;
	}
	free(new);
	return (NULL);
}
