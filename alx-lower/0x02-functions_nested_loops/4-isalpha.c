#include "main.h"
/**
 * -isalpha - it will show i if the input is a letter, another case, return 0
 *  return: 1 for letters, 0 for other cases.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}	
	_putchar('\n');
}

