#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list to be freed.
 *
 * Description: This function frees all the nodes in a listint_t linked list
 * and sets the head pointer to NULL to indicate an empty list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
