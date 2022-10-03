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

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
