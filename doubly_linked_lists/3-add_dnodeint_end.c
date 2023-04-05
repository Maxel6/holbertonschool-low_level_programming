#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t) * 1);

	if (!new_node)
		return (NULL);


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next)
	{
		(*head) = (*head)->next;
	}
	new_node->next = NULL;
        new_node->n = n;
        new_node->prev = (*head);
	(*head)->next = new_node;
	(*head) = (*head)->next;

	return ((*head));
}
