#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t) * 1);

	if (!new_node)
		return (NULL);

	tmp = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	new_node->next = NULL;
        new_node->n = n;
        new_node->prev = tmp;
	tmp->next = new_node;

	return (new_node);
}
