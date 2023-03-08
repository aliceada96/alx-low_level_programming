#include "main.h"

/**
 * factorial - returns the factorial
 * @n: given number
 * Return: -1 if n<0, factorial of given number if n>0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
