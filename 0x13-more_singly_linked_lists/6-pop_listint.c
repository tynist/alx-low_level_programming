#include "lists.h"

/**
 * pop_listint - deletes the head node a linked list
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         otherwise 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
