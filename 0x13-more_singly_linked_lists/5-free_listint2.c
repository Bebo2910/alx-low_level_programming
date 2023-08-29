#include "lists.h"

/**
  * free_listint2 - funct
  * @head: head
  * Return: rencd
  *
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
