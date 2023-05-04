# 0x14. C - Bit manipulation

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Look for the right source of information without too much help
How to manipulate bits and use bitwise operators


# Tasks
0. 0
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL


1. 1
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators


2. 10
mandatory
Score: 84.44% (Checks completed: 100.0%)
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured
