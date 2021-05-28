#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *@hash_table_t size of the array
 *@size size of array
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)

{

	unsigned long int i;
	hash_table_t *new_t;

	new_t = malloc(sizeof(hash_table_t));
/*devuelve puntero a espacio de memoria*/

	new_t->size = size;

new_t->array = malloc(sizeof(hash_node_t **) * size);

	for (i = 0; i < size; i++)
	{
		new_t->array[i] = NULL;
	}
	return (new_t);
		}
