#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_list_t(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
