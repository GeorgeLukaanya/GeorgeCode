#include "main.h"
/**
 * print_sign - determines if the number that has been input is greater than, equal to or less than zero
 * return: 1 is greater than 0.  negative one is less than 0. 0 is equal to zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}


