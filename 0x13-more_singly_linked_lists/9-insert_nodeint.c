#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node in the
 * linked list a a particular position
 * @head: This points to the first node
 * @idx: This is the index where the node is added
 * @n: This is the data to insert in the new node
 * Return: pointer to the new node, otherwise, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; temporary && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = temporary->next;
			temporary->next = new;
			return (new);
		}
		else
			temporary = temporary->next;
	}
	return (NULL);
}
