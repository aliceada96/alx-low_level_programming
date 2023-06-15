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
dlistint_t *tmp, *tail;

tmp = malloc(sizeof(dlistint_t));
if (tmp == NULL)
return (NULL)

tmp->n = n;
temp->next = NULL;

if (*head == NULL)
{
tmp->prev = NULL;
*head = tmp;
return (tmp);
}

tail = *head;
while (tail->next != NULL)
tail = tail->next;
tail->next = tmp;
tmp->prev = tail;

return (tmp);
}
