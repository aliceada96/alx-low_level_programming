#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters passed to a function
 *
 * Return: 0 if n == 0, else sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i, sum = 0;

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);

	return (sum);
}
