#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: poniter to head of a list
 * @n: n element
 *
 * Return: NULL if it fails
 *         Otherwise - the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
