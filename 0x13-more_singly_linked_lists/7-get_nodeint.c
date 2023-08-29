#include "lists.h"

/**
  * get_nodeint_at_index - function
  * @head: new
  * @index: the index desired
  * Return: head
  *
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *buffer = head, *new = malloc(sizeof(listint));
	unsigned int i = 0;

	if (!new || !head)
	{
		return (NULL);
	}

	while (i < index && buffer)
	{
		buffer = buffer->next;
		i++;
	}

	if (!buffer)
	{
		return (NULL);
	}

	new->n = buffer->n;
	new->next = head;
	head = new;
	return (head);
}
