#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the sum of two numbers
 * @argc: the number of arguments
 * @argv: an array that stores the arguments.
 * Return: 0 for success.
 */
int main(int argc, int *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])

		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);

	else
		printf("Error\n");

	return (1);
}

