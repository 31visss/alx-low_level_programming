#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
