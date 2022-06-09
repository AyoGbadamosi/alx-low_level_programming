#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p;
	int i;

	i = 0;
	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
