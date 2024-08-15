#include "lists.h"
/**
 * sum_dlistint - sum the total data(n) in a d_list
 *
 * @head: pointer to the list head
 *
 * Return: total number of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
