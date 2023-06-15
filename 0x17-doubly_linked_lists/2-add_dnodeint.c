#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of a list
 * @head: pointer to a pointer to head
 * @n: int added
 * Return: adress of new element, else NULL if failed
 *
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new

*head = new;

return (new);
}
