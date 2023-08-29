#include "lists.h"

/**
  *
  *
  *
  *
  *
  *
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *buffer = head, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	while (i < index)
	{
		buffer = buffer->next
