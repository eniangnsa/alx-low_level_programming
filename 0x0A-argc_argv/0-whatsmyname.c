/**
 * main -  this is a program that prints the name of the file
 * @argc : argc parameter
 * @argv : an array that stores all the parameters of the function.
 * Return : Always 0 (Success)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

