#include <stdio.h>

/**
 * main - prints the first fibonacci numbers starting with 1 and 2 followed
 * by a new line
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	int count;

	printf("%li, %li, ", a, b);

	for (count = 0; count < 49; count++)
	{
		sum = a + b;
		printf("%li, ", sum);

		a = b;
		b = sum;
	}
	sum = a + b;
	printf("%li\n", sum);
	return (0);
}
