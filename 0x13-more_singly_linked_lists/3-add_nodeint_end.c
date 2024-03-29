#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be added as the data for the new node.
 *
 * Return: The address of the new element, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)

	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
