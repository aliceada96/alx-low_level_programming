#include "lists.h"


/**
 * sum_dlistint - sums data in the linked list
 * @head: head of dlistint_t list
 *
 * Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
	sum += head->n;
	head = head->next;
}

return (sum);
}
