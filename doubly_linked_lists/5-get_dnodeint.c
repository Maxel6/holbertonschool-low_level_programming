#include "lists.h"
/**
 * get_dnodeint_at_index - return the adresse of a node
 * @head: the doubly linked list
 * @index: the index of the node
 * Return: the adress of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
