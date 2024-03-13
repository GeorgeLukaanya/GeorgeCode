#include "main.h"

/**
 * _puts_recursion - print a string then a new line
 * @s: string to print
 * Description: prints a string then a new line
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	
	_puts_recursion(s);
}

