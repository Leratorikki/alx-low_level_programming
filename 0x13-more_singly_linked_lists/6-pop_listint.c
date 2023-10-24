#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the head node in the linked list
 *
 * Return: the data inside the head node ,or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
