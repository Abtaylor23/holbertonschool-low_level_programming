#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * REturn: always 0.
 */

int main(void)

{
	char s1[98] = "hello";
	char s2[] = "world!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}

