#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbbers
 * @argc: number of arguments passed to the main function
 * @argv: array for all arguments passed to main function
 * Return: Always, 0 for Success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	int prod, first, second;

	if (argv[1] && argv[2])
		first = atoi(argv[1]); /* to convert strinng to int */
		second = atoi(argv[2]); /* to convert string to int */
		prod = first * second;
		printf("%d\n", prod);
		return (0);

	else
		printf("Error");
	return (1);
}
