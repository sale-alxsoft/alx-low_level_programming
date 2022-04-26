#include "lists.h"
/**
 * sum_listint - add all the data
 * @head: points to the first node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
