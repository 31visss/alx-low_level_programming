#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int e, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		e = 0;
		while (s1[e++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		e = 0;
		while (s2[e++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (e = 0; e < len1; e++)
		result[e] = s1[e];
	for (j = 0; e < len2; j++, e++)
		result[e] = s2[j];
	result[len] = '\0';

	return (result);
}

