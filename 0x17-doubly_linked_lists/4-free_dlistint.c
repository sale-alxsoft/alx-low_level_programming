#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
