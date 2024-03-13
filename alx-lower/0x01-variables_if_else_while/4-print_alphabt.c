#include <stdio.h>
/**
 * main - entry point
 * description: 'print letters except q and e'
 * return: always 0
 */
int main(void)
{
	int n= 97;
	while (n <= 122)
	{
	     if (n == 101 || n == 113)
	     {
		n++;
   		continue;
		}
		putchar(n);
   		n++;
	}
	putchar('\n');	
	return (0);
}

