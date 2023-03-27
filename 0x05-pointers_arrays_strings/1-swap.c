#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: 0 if successful
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
