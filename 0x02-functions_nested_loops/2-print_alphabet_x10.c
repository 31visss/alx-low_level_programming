#include "main.h"
/**
 * main - check the code
 *
 * Return: always zero
 */
void print_alphabet_x10(void)
{
	char num = 'a', alph;

	while (num <= 'j')
	{
		alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		num++;
	}
}
