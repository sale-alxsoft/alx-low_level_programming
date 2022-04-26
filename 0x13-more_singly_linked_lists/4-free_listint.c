#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: a pointer to header node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	int count;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}

