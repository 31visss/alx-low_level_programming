#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f, g, z;
	char *s;

	if (s1 == NULL)
	{
		f = 0;
	}
	else
	{
		for (f = 0; s1[f]; ++f)
		;
	}
	if (s2 == NULL)
	{
		g = 0;
	}
	else
	{
		for (g = 0; s2[g]; ++g)
		;
	}
	if (g > n)
		g = n;
	s = malloc(sizeof(char) * (f + g + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < f; z++)
		s[z] = s1[z];
	for (z = 0; z < g; z++)
		s[z + f] = s2[z];
	s[f + g] = '\0';
	return (s);
}
