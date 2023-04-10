#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Argument count
 * @argv: argument vector
 * Return: 1 if arguments are leaa than 2
 */
int main(int argc, char **argv)
{
	int x, y, m;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	m = x * y;
	{
		printf("%d\n", m);
		return (0);
	}
}
