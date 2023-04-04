#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	(*head)->next = NULL;
}
