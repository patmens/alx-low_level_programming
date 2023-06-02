#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -> A function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			counter++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
