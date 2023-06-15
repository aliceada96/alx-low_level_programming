#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to pointer to head of dlistint_t
 * @n: node to be added
 *
 * Return: Adress of new element ele NULL if fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
