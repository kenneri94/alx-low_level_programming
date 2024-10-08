#include "lists.h"
/*
 * get_dnodeint_at_index - gets a node at a particular index of a d_list 
 *
 * @head: pointer to the head node
 * @index: to retrieve its node
 *
 * Return: pointer to the node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t itr = 0;

	for (itr = 0; itr < index; itr++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
