#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest - destination memory area
 * @scr - source memory area
 * @n - bytes copied from memory area
 * Return: string.
 */
char *_memcpy(char *dest,char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
