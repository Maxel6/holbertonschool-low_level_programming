#include "lists.h"
/**
 * add_dnodeint - add a new node
 * @head: the double linked list
 * @n: the elements of the new node
 * Return: the adress a the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t) * 1);
	if (!new_node || !head)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
