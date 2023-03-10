#include <stdio.h>
include "main.h"

/**
 * main - prints its name followed by a new line
 * @argc: Number of arguments entered on the cmd lne
 * @argv: array of pointers to the arguments entered on the cmd line
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
