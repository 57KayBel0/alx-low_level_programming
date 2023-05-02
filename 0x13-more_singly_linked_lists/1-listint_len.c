#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: A pointer to the listint_t
 * Return: number of nodes in the list_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t current = 0;

	while (h)
	{
		current++;
		h = h->next;
	}
	return (current);
}
