#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *a function that prints all the elements of a list_t
  @h: header pointer
Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t kount = 0;
	         while (h != NULL)
		 {
			 if (h->str == NULL)
			 {
				 printf("[0] (nil)\n");
				 h = h->next;
				 kount++;
			 }
			 else
			 {
				 printf("[%u] %s\n" , h->len ,h->str);
				 h = h->next;
				 kount++;
			 }
		 }
		 return(kount);
}
