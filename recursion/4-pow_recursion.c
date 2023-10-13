#include "main.h"

/**
 * _pow_recursion - Return the vaule of x raised to the power of y
 * @x: the value to multiply
 * @y: the times to multiply the vaule
 *
 * Return: the vaule multiplied y times
 */
int _pow_recursion(int x, int y)
{
	// Base Case: If the exponet is 0, return 1.
	if (y == 0) {
		return (1);
	}

	// Handle the case where y is negative.
	if (y < 0)
		// You can return an error vaule or handle it according to your requirements.
		return -1,
}
	// Recursive Case: Multiply x by the result of (_pow_recursion(x, y - 1) 
	return x * _pow_recursion(x, y - 1)
}

	

