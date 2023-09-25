#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
	node_count++;

	if (current <= current->next)
	{
		*h = NULL;
		return (node_count);
	}

		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (node_count);
}
