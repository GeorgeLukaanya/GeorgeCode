#include <stdio.h>
/**
 * main - entry point
 * description: 'prints single digit numbers of base 10'
 * return: always 0
 */
int main(void)
{
	int n;
	for (n=0; n <= 9; n++);
	{
		putchar(n + 48);
	}
	putchar('\n');
	return  (0);
}
