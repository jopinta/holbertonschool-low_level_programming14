#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)

{
	size_t nodo = 0;

	while (h)
	{
			printf("%s\n", h->n);
		nodo++;

		h = h->next;
	}

	return (cont);
}
