#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: a pointer to the pointer of the first node
 * @str: string element of the linked list0x12. C - Singly linked lists
 * Return: *head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp = malloc(sizeof(list_t));

	while (str[i] != '\0')
		i++;
	if (temp == NULL)
		return (NULL);
	temp->str = (char *)str;
	temp->len = i;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (*head);
}
