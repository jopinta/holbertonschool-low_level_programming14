#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *head;
	int n;

	listint_s *ptr = head;

	while (ptr)
		printf("%d-> ", ptr->data);
	ptr = ptr->next;
}
printf("null");
}

void push(listint_s **head, int n)
{
	listint_s *newNode = (listint_s)malloc(sizeof(listint_ s));
	{
	newNode->next = *head;
	*head = NewNode;
	}
	int pop_listint(listint_s **head)
	{
		if (*head == NULL)
		{
			return (-1);
		}

		listint_s *head = head;
		int n = head->data;
		(*head) = (*head)->next;

		free(head);
		return (n);
	}
