#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: this arguments shows the number paramters to it
 * @argv: an array that stores the all the paramters.
 * Return: Always, 0 for Success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
