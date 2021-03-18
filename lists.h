#ifndef LISTS.H_
#define LISTS.H_
#include <stdio.h>
#include <stdlib.h>


/**
 *struct list_s - structure to move inside the list
 *@str: string - (malloc'ed string)
 *@len: lenght of string
 *@next: points to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);


#endif
