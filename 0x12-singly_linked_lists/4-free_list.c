#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This is a function that frees a list_t list
 * @head: input the header pointer
 * Return: nothing is returned
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
