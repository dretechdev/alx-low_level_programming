#include "lists.h"

/**
 * list_len - This function finds the length of a list
 * @h: This is the major head node
 * Return: The length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
