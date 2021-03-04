#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - check the code for Holberton School students.
 *@s1: string 1
 *@s2: string 2
 *@n: unsint
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strgcat;
unsigned int lens1, lens2, i, j;

if (!s1)
	s1 = "";
if (!s2)
	s2 = "";

for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	;
if (n >= lens2)
	n = lens2 + 1;
for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	;
strgcat = malloc(sizeof(char) * (lens1 + n + 1));
if (!strgcat)
	return (NULL);
for (i = 0; i < lens1; i++)
	strgcat[i] = s1[i];
for (j = 0; j < n; j++)
	strgcat[i + j] = s2[j];
strgcat[i + j] = '\0';
return (strgcat);
}
