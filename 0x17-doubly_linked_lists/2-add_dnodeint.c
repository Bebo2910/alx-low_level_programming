#include "lists.h"

/**
 * add_dnodeint - function to add nodes
 * @n: the new number
 * Return: adderss on success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return NULL;
	}

	new->next = (*head);
	new->n = n;
	new->prev = NULL;
	(*head) = new;

	return (new);
}
