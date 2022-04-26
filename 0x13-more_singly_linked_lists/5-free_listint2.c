#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: points to header node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;
		while ((ptr = current) != NULL)
		{
			current = current->next;
			free(ptr);
		}
		*head = NULL;
	}
}
