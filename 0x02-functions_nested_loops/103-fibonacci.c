#include <stdio.h>
/**
 * main - finds and prints the sum of even-valued terms in a fibonacci sequence
 * whose values do not exceed 4000000.
 *
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long next_value = 0;
	long even_sum = 2;
	
	
	while (next_value <  4000000)
	{
		next_value = a + b;
		if (next_value % 2 == 0)
		{
			even_sum += next_value;
		}
		a = b;
		b = next_value;

	}
	printf("%li\n, ", even_sum);

	return (0);
}
