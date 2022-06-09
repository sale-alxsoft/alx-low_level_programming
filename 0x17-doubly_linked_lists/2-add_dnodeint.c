#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: head of the list
 * @n: data of the list
 *
 * Return: the address of the linked list, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
