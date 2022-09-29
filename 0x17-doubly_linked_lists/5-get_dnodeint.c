#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
