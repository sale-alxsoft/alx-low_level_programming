#include "lists.h"
/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
