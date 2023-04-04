#include "list.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the list
 * @head: pointer to the adress of the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
