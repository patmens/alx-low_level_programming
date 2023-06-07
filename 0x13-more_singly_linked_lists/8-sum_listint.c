#include "lists.h"

/**
 * sum_listint - This function calculates the  sum of all the data "n".
 * @head: A header pointer.
 * Return: returns 0 if list is empty, else returns total data.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
