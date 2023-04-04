#include "lists.h"
/**
 * add_node - create a new node
 * @head: is a single linked list of type list_t
 * @str: the string to copy in the new node
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t) * 1);
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
