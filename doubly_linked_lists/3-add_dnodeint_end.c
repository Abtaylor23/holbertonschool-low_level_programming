#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if ((*head != NULL))
	{	while ((*head)->prev != NULL)
			*head = (*head)->prev;
	}
	while ((tmp = *head) != NULL)
	{
		*head = (*head)->next;
		free(tmp);
	}
}
