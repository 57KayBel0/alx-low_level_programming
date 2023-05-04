#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position in a
 * listint_t linked list.
 * @head: double pointer to the head of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = current->next->next;
	free(temp);

	return (1);
}
