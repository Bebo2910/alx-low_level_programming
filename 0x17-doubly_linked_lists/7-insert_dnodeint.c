#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *buffer = *h;
	unsigned int i = 0;

	if (!new || !h)
	{
		return (new ? free(new), NULL : NULL);
	}

	if (idx == 0)
	{
		free(new);
		add_dnodeint(&(*h), n);
		return (*h);
	}

	for (; i < idx - 1; i++)
	{
		if (!(buffer))
		{
			return NULL;
		}
		if (i == idx - 2)
		{
			add_dnodeint_end(&(*h), n);
			return (*h);
		}
		buffer = buffer->next;
	}
	new->n = n;
	new->prev = buffer;
	new->next = buffer->next;
	buffer->next->prev = new;
	buffer->next = new;
	return (*h);
}
