#include "lists.h"

/**
 *add_dnodeint - add new node to the d_list
 *
 * @head: double pointer to head pointer to the list
 * @n: data of the new node
 * Return: pointer to the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	/*New node created*/
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
