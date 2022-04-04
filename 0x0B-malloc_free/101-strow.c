#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char **spll(char *str, int cont1);
/**
  * strtow - splits a string into words
  * @str: a string with spaces
  * Return: an address
  */

char **strtow(char *str)
{
	int i, cont1 = 0, flag1 = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && flag1 == 0)
		{
			cont1++;
			flag1 = 1;
		}
		else if (flag1 == 1 && str[i + 1] == ' ')
			flag1 = 0;
	}
	if (cont1 == 0)
		return (NULL);

	return (spll(str, cont1));
}
