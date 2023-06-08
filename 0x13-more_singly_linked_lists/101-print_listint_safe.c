#include <stdio.h>
#include "lists.h"

/**
 * looped_listint_len - This function Counts the number of unique nodes
 * @HEAD: a HEADER POINTER
 * @RETURN: RETURNS A VALUE
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
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
  *
 * print_listint_safe - This function  Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: returns a value
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodez, indx = 0;

	nodez = looped_listint_len(head);

	if (nodez == 0)
	{
		for (; head != NULL; nodez++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < nodez; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodez);
}
