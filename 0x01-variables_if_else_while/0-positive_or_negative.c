#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n < 0)
	{
		printf("negative\n");
	}
	else
	{
		printf("zero\n");
	}
	return (0);
}
