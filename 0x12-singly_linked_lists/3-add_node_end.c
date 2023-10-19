#include "lists.h"

/**
 * add_node_end - This adds a node to the end of the list
 * @head: This is the head of the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recentnode, *temporary;
	unsigned int i, counting = 0;

	recentnode = malloc(sizeof(list_t));
	if (recentnode == NULL)
		return (NULL);
	recentnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		counting++;
	recentnode->len = counting;
	recentnode->next = NULL;
	temporary = *head;

	if (temporary == NULL)
		*head = recentnode;
	else
	{
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = recentnode;
	}
	return (*head);
}
