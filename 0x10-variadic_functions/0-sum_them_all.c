#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - This function finds the sum of all parameters
 *@n: The nnumber of argumennts passed to the function.
 * Return: 0 for success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	/* initialize the list */
	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

