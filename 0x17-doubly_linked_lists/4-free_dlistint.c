#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked
 *
 * @head: pointer to the list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
