#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node in a linked
 * list at a certain index
 * @head: This is the pointer to the first element in the list
 * @index: This is the index of the node to be deleted
 * Return: 1 on success OR 0 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (num < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		num++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
