#include "lists.h"

/**
 * print_dlistint - prints all elements of dlisint_t list
 * @h:pointer to the list
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
if (h->n == '\0')
printf("0\n");
else
printf("%d\n", h->n);

nodes++;

h = h->next;
}
return (nodes);
}
