#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees alinked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
