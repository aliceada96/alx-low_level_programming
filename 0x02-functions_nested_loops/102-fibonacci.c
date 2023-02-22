#include <stdio.h>

/**
 * main - prints the first fibonacci numbers starting with 1 and 2 followed
 * by a new line
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, sum;
	int count;

	a = 0;
	b = 1;

	for (count = 0; count < 50; count++)
	{
		sum = a + b;
		printf("%d, ", sum);

		a = b;
		b = sum;
	}

	sum = a + b;
	printf("%d, ", sum);

	return (0);
}
