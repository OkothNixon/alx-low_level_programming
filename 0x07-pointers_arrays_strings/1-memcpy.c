#include "main.h"
/**
 * _memcpy - copy string src to dest n times.
 * @src: the string to copy.
 * @dest: the string to be copied to n times.
 * @n: the number of times to copy string src.
 * Return: string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}