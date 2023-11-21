#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node, or NULL if the node is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	/* Check if the desired index was reached */

	if (i == index -1)

		return head;

	/* If the loop completes without reaching the index, return NULL */
	return (NULL);
}                     
