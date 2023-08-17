#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of  list
 * @n: value of element
 * Return: the address of the new element
 * author:matt mbithuka
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *m;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	m = *head;

	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}

	new->next = m;

	if (m != NULL)
		m->prev = new;

	*head = new;

	return (new);
}
