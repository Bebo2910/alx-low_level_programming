#include "lists.h"

/**
  * free_listint - function
  * @head: func
  * return: void
  *
  *
  */
void free_listint(listint_t *head)
{
	listint_t *buffer;

	while (head)
	{
		buffer = head;
		head = head->next;
		free(buffer);
	}
}
