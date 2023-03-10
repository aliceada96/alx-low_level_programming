#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments passed to cmd line
 * @argv: array of pointers to strings entered on cmd line
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc);
	return (0);
}
