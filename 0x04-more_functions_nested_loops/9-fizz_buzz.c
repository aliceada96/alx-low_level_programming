#include "main.h"
#include <stdio.h>

/**
 * main - print fizz for numbers divisible by 3, buzz for those dividible by 5
 * and fizzbuzz for those dividible by both
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			putchar(' ');
		}
	}
		printf("\n");

		return (0);
}
