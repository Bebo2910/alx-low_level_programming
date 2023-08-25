#include "lists.h"

/**
  * free_list - func
  * @head: lis
  * Return: return
  *
  *
  */
void free_list(list_t *head)
{
	list_t *node, *next_one;

	if (!head)
	{
		return;
	}

	node = head;
	while (node)
	{
		next_one = node->next;
		free(node->str);
		free(node);
		node = next_one;
	}
}
