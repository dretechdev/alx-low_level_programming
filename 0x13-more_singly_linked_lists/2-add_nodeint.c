#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a listint_t
 * @head: This is a pointer to the address of the head
 * @n: This is the integer for the new code
 * Return: NULL if the function fails OR return the address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *recent;

	recent = malloc(sizeof(listint_t));
	if (recent == NULL)
		return (NULL);
	recent->n = n;
	recent->next = *head;

	*head = recent;

	return (recent);
}
