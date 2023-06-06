#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - This function Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: returns number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nods = 0;

	while (h)
	{
		nods++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nods);
}
