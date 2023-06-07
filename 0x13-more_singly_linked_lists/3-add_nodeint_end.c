#include "lists.h"

/**
 * add_nodeint_end - this function adds nodes at the  end of a listint_t list.
 * @head: A head pointer
 * @n: An integer variable to contain new nodes.
 * Return: returns a new element or Null is function fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{ 
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
