#include "lists.h"
/**
 * sum_dlistint - sum all data of a dlistint
 * @head: doubly linked list to count
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
