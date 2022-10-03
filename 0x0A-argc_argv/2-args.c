#include <stdio.h>
/**
 * main - a program that prints all the arguments
 * @argc: the number of arguments passed into the main function
 * @argv: an array that stores all the paramters passed into the main function
 * Return: Always, 0 for Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
