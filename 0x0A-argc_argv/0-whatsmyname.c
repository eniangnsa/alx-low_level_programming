#include <stdio.h>
/**
 * this is a program that prints the name of the file
 * @argc : argc parameter
 * @argv : an array that stores all the parameters of the function.
 * Return : 0 for success
 */
 
 int main(int argc __attribute__((unused)), char *argv[])
 {
 	printf("%c\n", *argv[0]);
	return (0);
 }
