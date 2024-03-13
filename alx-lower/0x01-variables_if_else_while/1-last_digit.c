#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: 'get the last digit of a number'
 * return: always 0
 */
int main(void)
{
	int n;
	int ld;
	srand(time(0));
	n = rand() - rand_max /2;
	ld=n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (id == 0)
	{
		printif("Last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, ld);
	}
	return (0);
}
