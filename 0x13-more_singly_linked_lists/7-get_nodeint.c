#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a certain index in linked list
 * @head: first node in the linked list
 * @index: index of the node to the node
 *
 * Return: pointer to the node we are looking  for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
