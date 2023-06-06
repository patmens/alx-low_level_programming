#include "lists.h"

/**
 * listint_len - This function  returns the number of elements in a linked list
 * @h: head of a list.
 *
 * Return: returns number of nods.
 */
size_t listint_len(const listint_t *h)
{
	size_t nods = 0;

	while (h != NULL)
	{
		h = h->next;
		nods++;
	}
	return (nods);
}
