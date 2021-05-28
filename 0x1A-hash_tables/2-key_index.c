#include "hash_tables.h"

/**
 *key_index - check the code for Holberton School students.
 *
 *@size: array
 *@key: sert
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	unsigned long int hash;
	unsigned long int index;

hash = hash_djb2(key);
index = hash % size;
		return (index);
	}
