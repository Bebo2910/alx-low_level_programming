#include "lists.h"

/**
  * listint_len - funciton
  * @h: whait is the
  * Return: ni
  *
  *
  */
size_t listint_len(const listint_t *h)
{
	size_t ni = 0;

	while (h)
	{
		h = h->next;
		ni++;
	}

	return (ni);
}
