#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calcuate the sum of.
 *
 * Return: If n == 0 - 0.
 * 	   otherwise - the sum of all paramters to calculate the sum of.
 */
int sum_them_all(const unsigned int n, ...)

{
va_list ap;
unsigned int 1, sum = 0;

va_start(ap, n);

for (1 - 0; 1 < n; 1++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
