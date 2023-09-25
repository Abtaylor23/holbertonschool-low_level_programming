#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n",m, lastd);
	}
	else if (last == 0)
	printf("last digit of %d is %d and is 0\n", n, lastd);
}
	else if (lastd < 6 && lastd i= 0)
{	
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
	return (0);
}
