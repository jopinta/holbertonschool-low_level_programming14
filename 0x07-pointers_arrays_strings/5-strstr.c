#include "holberton.h"

/**
 * _strstr - locate substring in a string
 * @haystack: the string to scan
 * @needle: the substring
 * ------------------------------------------------
 * Return: char pointer "p"
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
			return ((haystack + i));
	}

	return (0);
}
