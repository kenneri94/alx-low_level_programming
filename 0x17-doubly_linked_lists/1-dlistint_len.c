#include "lists.h"

/**
 * dlistint_len - print dlistint_t list elemente
 *
 * @h: the head pointer to the list
 *
 * Return: returns nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_no = 0;
	
	while (h)
	{
		element_no += 1;
		h = h->next;
	}
	return (element_no);
}
