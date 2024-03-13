#include "main.h"
/**
 * printing last digit - printing the last digit of a number
 * return: the last digit
 */
int print_last_digit(int)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
	

