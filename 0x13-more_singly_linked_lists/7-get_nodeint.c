#include "lists.h"

/**
 * get_nodeint_at_index - This returns the node at a  ertain index in a
 * linked list
 * @head: This is the first node in the linked list
 * @index: This is the index of the node to be returned
 * Return: The pointer to the node we are looking for
 * or return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int number  = 0;
	listint_t *temporary = head;

	while (temporary && number < index)
	{
		temporary = temporary->next;
		number++;
	}
	return (temporary ? temporary : NULL);
}
