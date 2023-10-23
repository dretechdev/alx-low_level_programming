#include "lists.h"

/**
 * sum_listint - This calc the addition of all the data in a listint_t list
 * @head: This is the first node in the linked list
 * Return: The resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
