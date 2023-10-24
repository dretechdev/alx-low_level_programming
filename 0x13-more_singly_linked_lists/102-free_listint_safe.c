#include "lists.h"

/**
 * free_listint_safe - This frees a linked list
 * @h: This is the pointer to the first node in the linked list
 * Return: The number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);

}
