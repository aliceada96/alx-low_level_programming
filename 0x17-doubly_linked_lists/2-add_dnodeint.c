#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the begining of a list
 * @head: pointer to a pointer to head
 * @n: int added
 * Return: adress of new element, else NULL if failed
 *
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new, *last;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
new->prev = last;

return (new);
}
