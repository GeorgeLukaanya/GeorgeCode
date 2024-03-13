#include "main.h"
/**
 * _memset - entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * description: fills n bytes of the memory to an area pointed to by s
 * Return: always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
