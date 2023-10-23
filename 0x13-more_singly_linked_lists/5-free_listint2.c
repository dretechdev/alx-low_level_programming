#include "lists.h"

/**
 * free_listint2 - This frees a listint_t list
 * @head: This is a pointer to the address of the
 * head of the listint_t list
 * Description: This funtion sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
