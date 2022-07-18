#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *peace;

	peace = dest;
	while (n > 0)
	{
		*dest = *scr;
		dest++;
		src++;
		n--;
	}

	return (peace);
}
