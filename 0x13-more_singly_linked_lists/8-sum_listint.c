#include "lists.h"

/**
  * sum_listint - function
  * @head: ls
  * Return: sum
  *
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *buffer = head;

	if (!head)
	{
		return (sum);
	}

	while (buffer)
	{
		sum += buffer->n;
		buffer = buffer->next;
	}

	return (sum);
}
