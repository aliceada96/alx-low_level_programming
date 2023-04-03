#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adda a new node at the end of listint_t
 * @head: pointer to the adress of the head of the list
 * @n: value of int being added to the list
 *
 * Return: Adress of the new element, else NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head, *tail;

	new = malloc(sizeof(listint_t));

	if (new == NULL)/*checks if memory has been allocated*/
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (last);
}
