#include "lists.h"

/**
 * get_nodeint_at_index - This function locates a given node of listint_t linked list.
 * @head: A header of the  pointer.
 * @index: Index of the node to located node
 * Return: Returns NULL if the node does not exis, else located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
