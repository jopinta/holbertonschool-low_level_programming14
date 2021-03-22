#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print elementsof a list
 *@h: ptr to struct
 * Return: nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t nodo = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodo++;

		h = h->next;
	}

	return (nodo);
}
