#include "main.h"
/**
 * print_alphabet_x10 - entry point
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
