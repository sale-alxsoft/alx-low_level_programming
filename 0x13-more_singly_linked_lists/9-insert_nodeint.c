#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given index
 * @head: points to the first node
 * @idx: index
 * @n: data of the node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	temp = *head;
	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (temp);
}
