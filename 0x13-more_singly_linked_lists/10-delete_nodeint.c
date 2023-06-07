#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: A header pointer
 * @index: The index of the node to be deleted 
 * Return: On success - 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int nodes;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (nodes = 0; nodes < (index - 1); nodes++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
