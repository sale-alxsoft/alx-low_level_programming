#include "lists.h"
/**
 * print_list - prints all elements
 * @h: pointer to the first node
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			;
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
