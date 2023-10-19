#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */

char *_memset(char *dest, char *src, unsigned int n)

{
	unsigned int i; 

	for (i  = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
