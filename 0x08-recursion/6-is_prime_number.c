#include "main.h"

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return(is_prime(n, c + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else 
		return(is_prime(n, 2));
}
