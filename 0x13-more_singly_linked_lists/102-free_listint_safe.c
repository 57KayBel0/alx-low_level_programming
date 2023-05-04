#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("Error: linked list has a loop\n");
			exit(98);
		}
	}
	while (*h != NULL)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
