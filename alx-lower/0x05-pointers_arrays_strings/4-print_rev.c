#include "main.h"
/**
 * print_rev - function that prints a string in  reverse
 * @s: the used string pointer
 * return: 0
 */

void print_rev(char *s)
{
	int start = 0;
	int m;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
