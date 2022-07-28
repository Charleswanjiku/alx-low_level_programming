#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset -  initializes n bytes of memory to x
 * @ptr: initial adress
 * @x: variable to initialize with
 * @n: number of bytes to initialize
 * Return: Return pointer char (so movements are 1 byte)
 */

char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
