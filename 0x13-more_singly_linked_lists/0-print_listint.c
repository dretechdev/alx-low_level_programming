#include "lists.h"

/**
 * print_listint - This function prints all elements of a listint_t
 * @h: This is a pointer to the head of the list_t list
 * Return: Returns the number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
