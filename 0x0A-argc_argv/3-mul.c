#include <stdio.h>
/**
 * main - a program that multiplies two numbbers
 * @argc: number of arguments passed to the main function
 * @argv: array for all arguments passed to main function
 * Return: Always, 0 for Success
 */
int main(int argc, char *argv[])
{
	int prod, first, second;

	if (argc >= 2)
		first = atoi(argv[1]); /* to convert strinng to int */
		second = atoi(argv[2]); /* to convert string to int */
		prod = first * second;
		printf('%d\n', prod);
	else
		printf("%s\n", "Error");
	return (0);
}
