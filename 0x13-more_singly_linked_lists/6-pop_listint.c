#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: This is the pointer to the first element in the linked list
 * Return: Returns the data inside the elements that was deleted
 * or returns 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (number);
}
