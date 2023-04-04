#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node data
 * @head: pointer to a pointer of a linked list
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *sub;
	int n;

	if (*head == NULL)
		return (0);

	sub = *head;
	n = sub->n;
	temp = sub;
	sub = sub->next;
	free(temp);
	return (n);
}
