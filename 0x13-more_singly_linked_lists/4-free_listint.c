#include "list.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: pointer to the adress of the head
 */
void free_listint_t
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
