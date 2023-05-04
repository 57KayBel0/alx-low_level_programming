#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list, even if it loops
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

			while (slow != fast->next)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	if (slow == NULL || fast == NULL)
		return (count);
	while (head != fast->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);

	return (count);
}
