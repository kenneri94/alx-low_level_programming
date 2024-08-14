#include "lists.h"
/**
 * add_dnodeint_end - add node to end list
 *
 * @head: double pointer to the list
 * @n: data of new inserted
 *
 * Return: pointer created to the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;
new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
new->n = n;
	new->next = NULL;

	temp = (*head);
	if (temp != NULL)
{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
else
	*head = new;
new->prev = temp;

return (new);
}
