#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlisint_t list
 * @h:pointer to the list
 * Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t elements = 0;

while (h)
{
elements++;
h = h->next;
}
return (elements);
}
