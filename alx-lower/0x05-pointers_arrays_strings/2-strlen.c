#include "main.h"
/**
 * _strlen - checks the length of the string
 * @s: string to be checked
 * description: checks the length of the string
 * return: the length of the string
 */

int _strlen(char *s)
{
	int long = 0;

	while (*s != '\0')
	{
		long++;
		s++;
	}
	return (long);
}
