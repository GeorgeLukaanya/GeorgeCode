#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 * Description: copies n bytes from memory src to memory dest
 * Return: always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
