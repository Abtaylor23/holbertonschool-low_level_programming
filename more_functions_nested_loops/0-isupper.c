#include "main.h"
/**
 * _isupper - detect upper alphabets
 *
 * @a: input character
 * Return: (1) for true (0) faulse
 *
 */
int _isupper (int c)
{
	if (c >= 'A' && c <= 'z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
