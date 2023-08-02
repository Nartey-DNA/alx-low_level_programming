#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: Pointer to the first node in the list
 *
 * Return: Pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
/** no conditions */
	*head = prev;

	return (*head);
}

