#include "lists.h"

/**
 * free_listint - This function frees a listint_t list.
 * @head: A head  pointer, points to the head of the listint_t list which is  to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
          {
            tmp = head->next;
            free(head);
            head = tmp;
          }        

}
