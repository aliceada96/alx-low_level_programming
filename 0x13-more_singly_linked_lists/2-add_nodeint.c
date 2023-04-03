#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begining of listint_t list
 * @head: pointer to pointer to the begining of the listint_t
 * @n: value of new int being added to the node
 *
 * Return: Adress of the value of new element,
 * Null if it fails
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

	return (new);
}
