#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line 
 * @s: the string to print
 *
 * Return: nothin.
 */
void _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar.c('\n');
		return;
	}
	_putchar.c(*s)
	s++;
	_puts_recursion(s)
}
