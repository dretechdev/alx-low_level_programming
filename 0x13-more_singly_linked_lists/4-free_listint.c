#include "lists.h"

/**
 * free_listinint - This function frees a listint_t list
 * @head: This is a pointer to the head of the listint_t to be fred
 */

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
