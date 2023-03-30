#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string b4 executing main funct
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
