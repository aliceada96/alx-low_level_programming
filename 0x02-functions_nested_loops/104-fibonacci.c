#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: always zero
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long next_value;
	unsigned long int count;

	printf("%lu, %lu, ", i, j);
	for (count = 0; count < 96; count++)
	{
		next_value = i + j;
		i = j;
		j = next_value;
		printf("%lu", next_value);

		if  (count <= 94)
		{
			putchar(',');
			putchar(' ');
		}
	}
		printf("\n");
		return (0);
}
