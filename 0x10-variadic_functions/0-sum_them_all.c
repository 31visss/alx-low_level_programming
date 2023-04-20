#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int f;
	va_list af;

	va_start(af, n);

	if (n == 0)
		return (0);

	for (f = 0; f < n; f++)
		sum += va_arg(af, int);

	va_end(af);

	return (sum);
}
