#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: points to header node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(ptr);
	}
	*head = ptr;
	*head = NULL;
}
