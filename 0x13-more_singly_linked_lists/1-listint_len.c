#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function returns the number of elements in a linked list
 * @h: This is a pointer to the head of the list
 * Return: Returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
