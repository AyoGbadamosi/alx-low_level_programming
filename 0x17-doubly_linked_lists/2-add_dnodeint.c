#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: head of linked list
 * @n: constant integer
 * Return: address of new element or NUll if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *p;

	p = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = p;
	*head = temp;

	return (*head);
}
