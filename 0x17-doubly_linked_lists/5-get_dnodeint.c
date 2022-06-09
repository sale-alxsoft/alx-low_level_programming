#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: index of the node
 *
 * Return: node at index, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
