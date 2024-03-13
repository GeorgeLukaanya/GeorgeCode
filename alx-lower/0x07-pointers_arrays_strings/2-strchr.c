#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Description: returns a pointer to the first occurrence of xter c in string s
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0;  s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
