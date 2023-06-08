#include "lists.h"


/**
 * add_nodeint -  function  adds a new node at the beginning of the list.
 * @head: A head pointer, points to the head address of listint_t list.
 * @n: An integer variable to contain a new  node.
 * Return: returns new addresses
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
