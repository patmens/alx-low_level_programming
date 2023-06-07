#include "lists.h"

/**
 * pop_listint - This function erases the head node from the listint_t list
 * @h : A head pointer
 * return : this returns the data in the node "n"
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rtrn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rtrn = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rtrn);
}
