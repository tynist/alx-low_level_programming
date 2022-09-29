#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer linked list
 * @n: value to be added
 * Return: number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	if (head == NULL)
		return (NULL);
	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = *head;
	*head = new_nod;
	if (new_nod->next != NULL)
		(new_nod->next)->prev = new_nod;
	return (new_nod);
}
