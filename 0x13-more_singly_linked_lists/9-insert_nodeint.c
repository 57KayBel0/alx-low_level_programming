#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 * listint_t linked list.
 * @head: double pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: integer value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
