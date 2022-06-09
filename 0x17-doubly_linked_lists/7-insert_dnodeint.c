#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index
 * @n: data
 *
 * Return: the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *nhead;
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	nhead = *h;
	if (nhead == NULL)
	{
		ptr->next = nhead;
		nhead = ptr;
		return (*h);
	}
	while (nhead != NULL)
	{
		if (i == idx)
		{
			ptr->next = nhead;
			ptr->prev = nhead->prev;
			nhead->prev->next = ptr;
			nhead->prev = ptr;
			return (*h);
		}
		nhead = nhead->next;
		i++;
	}
	return (NULL);
}
