#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: douuble pointer to the beginning of a list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */

listint _t *add_nodeint(listp_t **head, const int n)
{
	listp_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
