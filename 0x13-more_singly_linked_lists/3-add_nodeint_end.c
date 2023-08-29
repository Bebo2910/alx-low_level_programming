#include "lists.h"

/**
  * add_nodeint_end - function to add nodes
  * @head: the main
  * @n: the number to be added
  * Return: new
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *buffer = *head, *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}

	(*head)->next = new;
	(*head) = buffer;
	return (new);
}
