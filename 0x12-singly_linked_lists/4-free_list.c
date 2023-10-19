#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This function frees a list
 * @head: This is the head of the linked list
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *recentnode;

	while ((recentnode = head) != NULL)
	{
		head = head->next;
		free(recentnode->str);
		free(recentnode);
	}
}
