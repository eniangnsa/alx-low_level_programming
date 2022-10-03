#include <stdio.h>
/**
 * this is a program that prints the name of the file
 * @argc : argc parameter
 * @argv : an array that stores all the parameters of the function.
 * Return : 0 for success
 */
 
 int main(int argc, char *argv[])
 {
 	printf("%s\n", *argv[0]);
	return (0);
 }
