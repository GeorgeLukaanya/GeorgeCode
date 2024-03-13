#include "main.h"
/**
 * swap_int - take in 2 variables integesr
 *
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * description: a function that swaps the values of 2 integers
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}


