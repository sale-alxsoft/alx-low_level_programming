#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: points to the head
 * @n: element of the new node
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = ptr;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (*head);
}
