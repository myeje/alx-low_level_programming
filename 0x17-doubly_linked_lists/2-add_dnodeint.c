#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a linked list
 * @head: pointer to address of list
 * @n: number to add
 * Return: Address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	add->prev = NULL;
	if (*head != NULL)
		(*head)->prev = add;
	*head = add;
	return (add);
}
