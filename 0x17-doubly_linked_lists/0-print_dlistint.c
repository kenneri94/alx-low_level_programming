#include "lists.h"

/**
 * print_dlist_t - print dlistint_t list elemente
 *
 * @h: the head pointer to the list
 *
 * Return: returns nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h)
	{
		node_no += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_no);
}
