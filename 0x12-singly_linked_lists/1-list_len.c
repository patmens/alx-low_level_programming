#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h=->next)
	{
		
		counter++;
	}
	return (counter);
}
