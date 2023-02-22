#include <stdio.h>

/**
 * main - prints the first fibonacci numbers starting with 1 and 2 followed
 * by a new line
 *
 * Return: always 0
 */
int main(void)
{
	long int a;
	long int b;
	long int sum;
	int count;

	a = 0;
	b = 1;
	sum = 0;
	count = 0;

	for (count = 0; count < 49; count++)
	{
		sum = a + b;
		printf("%li, ", sum);

		a = b;
		b = sum;
	}

	sum = a + b;
	printf("%li, ", sum);

	return (0);
}
