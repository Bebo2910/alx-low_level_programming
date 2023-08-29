#include "lists.h"
#include<stdio.h>

/**
  * print_listint - function
  * @h: h
  * Return: ni
  *
  *
  */
size_t print_listint(const listint_t *h)
{
	size_t ni = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ni++;
	}

	return (ni);
}
