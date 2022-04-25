#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: a pointer to the first node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
