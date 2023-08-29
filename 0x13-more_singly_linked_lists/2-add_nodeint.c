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

	if (!new || !head)
	{
		return (NULL);
	}

	while ((*head)->next)
	{
		(*head) = (*head)->next;
	}

	new->n = n;
	new->next = NULL;

	(*head)->next = new;
	(*head) = buffer;
	return (new);
}
