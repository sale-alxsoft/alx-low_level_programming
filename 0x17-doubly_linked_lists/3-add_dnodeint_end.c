#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: data of the list
 *
 * Return: the address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *nhead;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		nhead = *head;
		while (nhead->next != NULL)
			nhead = nhead->next;
		nhead->next = ptr;
		ptr->prev = nhead;
	}

	return (*head);
}
