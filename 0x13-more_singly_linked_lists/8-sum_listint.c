#include "lists.h"
/**
 * sum_listint - add all the data
 * @head: points to the first node
 *
 * Return: the sum, if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		int sum = 0;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
