#include <stdio.h>
/**
 * main - finds and prints the sum of even-valued terms in a fibonacci sequence
 * whose values do not exceed 4000000.
 *
 */
int main(void)
{
	long int a, b, sum, even_sum;

	a = 0;
	b = 1;

	while (sum > 4000000)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
		a = b;
		b = sum;

	}
	printf("%li, ", even_sum);

	return (0);
}
