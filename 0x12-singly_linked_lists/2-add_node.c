#include "lists.h"

/**
 * add_node - This function adds node to the beginning
 * @head: This is the head of the node
 * @str: This is the string we intend to store
 * Return: This returns the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *recentnode;
	unsigned int i, counting = 0;

	recentnode = malloc(sizeof(list_t));
	if (recentnode == NULL)
		return (NULL);
	recentnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		counting++;
	recentnode->len = counting;
	recentnode->next = *head;
	*head = recentnode;

	return (*head);
}
