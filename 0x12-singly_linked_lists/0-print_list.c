#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - This prints all emements of list_t
 * @h: The singly linked list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
