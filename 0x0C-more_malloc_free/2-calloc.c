#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *e;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	e = malloc(nmemb * size);
	if (e == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		e[b] = 0;
	return (e);
}
