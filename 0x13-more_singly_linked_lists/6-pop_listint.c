#include "lists.h"

/**
  * pop_listint - function
  * @head: head
  * Return: return
  *
  *
  *
  */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	node = *head
	*head = (*head)->next;
	free(node);

	return (i);
}
