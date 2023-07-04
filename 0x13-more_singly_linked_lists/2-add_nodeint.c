#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add_nodeint -adds a new node at the beginning of a linked list
 * @head: pointer to first nedo in the list
 * @n: data to insert int new node
 *
 * Return: pointer to new node, of NULL if it fails
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
