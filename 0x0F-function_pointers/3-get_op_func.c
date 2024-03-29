#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perfom the
 * operstion asked by user
 * @s: operator passed as an argument
 *
 * Return: a pointer to the fuction that corresponds to the
 * opeartor given as a parameter, else NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
