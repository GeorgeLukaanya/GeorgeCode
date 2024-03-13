#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string to reverse
 *
 * Description: print string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
