#include "3-calc.h"

/**
 * op_add - returns sum of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of 2 numbers
 * @a: 1stnumber
 * @b: 2nd number
 *
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product f 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of 2 numbers
 * @a: divider
 * @b: divisor
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
