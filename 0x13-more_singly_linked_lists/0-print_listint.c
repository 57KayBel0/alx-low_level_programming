#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: A pointer to the header of the list_t list.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t current = 0;

	while (h)
	{
		current++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (current);
}


