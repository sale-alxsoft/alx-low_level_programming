#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *current;
	int n;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		free(current->str);
		free(current);
	}
}
