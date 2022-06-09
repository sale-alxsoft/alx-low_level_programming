#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data
 * @head: head of the list
 *
 * Return: sum, 0 if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
