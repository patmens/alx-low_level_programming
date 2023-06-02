#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this function adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: this is a string to put in the new node
 * Return: address of the new element, NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *temp = *head;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = leng;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (temp->next)
		temp = temp->next;

	         temp->next = a;

	return (a);
}
