#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function that that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *  _strdup - fills memory with a constant byte
 * @str: is the size of the pointer
 * Return: an address
 * success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc((sizeof(char) * size) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
