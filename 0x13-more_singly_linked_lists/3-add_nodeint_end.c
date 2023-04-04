#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to the adress of the head of the list
 * @n: value of int being added to the list
 *
 * Return: Adress of the new element, else NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *tail;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)/*checks if memory has been allocated*/
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
