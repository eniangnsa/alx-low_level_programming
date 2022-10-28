#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: integer, first number
 * @m: integer, second number to convert to
 *
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

