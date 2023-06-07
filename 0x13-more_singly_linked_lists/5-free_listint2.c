#include "lists.h"

/**
 * free_listint - This function frees a list from lintint
 * @head: A head pointer
 * No Return in this function, head is set to Null.
 */

void free_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
