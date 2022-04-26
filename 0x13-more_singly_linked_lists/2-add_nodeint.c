#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * @head: points to the head
 * @n: element of the node
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}

