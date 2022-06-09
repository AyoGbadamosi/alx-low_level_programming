#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p;
	int i;

	i = 0;
	p = h;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}
