#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *prnt_list -> A function that prints all the elements of a list_t list
  * @h: header pointer
  * Return: Returns the number of nodes
  */

size_t print_list(const list_t *h)
{
  size_t counter = 0;
   for (; h != NULL; h = h->next)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		counter++;
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		counter++;
	}
}



}
