#include "lists.h"

/**
 * sum_listint - function calculates the sum of all the data in a listint_t list
 * @head: refers to the first node in the linked list
 *
 * Return: return value is a resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
