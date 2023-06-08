#include "lists.h"

/**
 * FIRST FUNCTION
 * looped_listint_count - This function  Counts the number of unique nodes in a linked list.
 * @head: A header pointer
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodez = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodez++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodez++;
				tortoise = tortoise->next;
			}

			return (nodez);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 *SECOND FUNCTION
 * free_listint_safe - This function frees a linked list safely
 * @h: A header pointer
 * Return: The size of the list freed.
 * Notes:  the head has been set to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodez, indx;

	nodez = looped_listint_count(*h);

	if (nodez == 0)
	{
		for (; h != NULL && *h != NULL; nodez++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (indx = 0; indx < nodez; indx++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodez);
}
