#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - This functions prints the arguments passed to it
 * @separator: the separator to be used for each argument when printed.
 * @n: the number of arguments to be printed
 * Return: 0 always success
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(p);
}
