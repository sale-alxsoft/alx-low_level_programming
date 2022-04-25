#include "lists.h"

/**
 * add_node_end - add a new node at the end of the linked list
 * @head: a pointer to a pointer which points to the first node
 * @str: string
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	list_t *temp = malloc(sizeof(list_t));
	unsigned int len_str = i;

	if (temp == NULL)
		return (NULL);
	temp->str = (char *)str;
	temp->len = len_str;
	temp->next = NULL;
	list_t *ptr = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
