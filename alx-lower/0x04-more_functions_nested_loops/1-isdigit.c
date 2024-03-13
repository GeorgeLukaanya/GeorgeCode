#include "main.h"
/**
 * _isdigit - checks for a particular digit
 * @c: the character being checked
 * return: 1 for digit character and then 0 for a letter
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
