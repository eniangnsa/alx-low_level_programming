#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the sum of two numbers
 * @argc: the number of arguments
 * @argv: an array that stores the arguments.
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}

