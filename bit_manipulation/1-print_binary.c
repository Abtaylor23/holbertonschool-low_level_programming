#include "main.h"

/**
 * print_binary - Prints a binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int current = n;

	while (current)
	{
		current = current >> 1;
		count++;
	}

	if (!count)
		putchar('0');

	while (count)
	{
		current = n >> --count;
		if (current & 1)
			putchar('1');
		else
			putchar('0');
	}
}
