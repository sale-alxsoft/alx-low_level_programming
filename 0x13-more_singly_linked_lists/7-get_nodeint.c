#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: points to the first node
 * @index: index of node
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	head = ptr;
	return (head);
}
