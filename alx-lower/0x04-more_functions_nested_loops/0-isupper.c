#include "main.h"
/**
 * _isupper - checking for uppercase
 * description: checking for uppercase character
 * @c: the character being checked
 * return: 1 for uppercase and 0 for else
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
