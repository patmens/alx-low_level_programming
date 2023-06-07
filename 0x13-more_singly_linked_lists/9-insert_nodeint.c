#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node
 *                            at a given position.
 * @head: A header Pointer.
 * @n: An integer variable to contain new node.
 * @idx: index of the new node
 * @nde: node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int nde;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (nde = 0; nde < (idx - 1); nde++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
} 
