#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end
 * of a listint_t list
 * @head: A pointerto the address of the head
 * @n: Thos is the integer for the new node to contain
 * Return: NULL if the function fails OR return the address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
