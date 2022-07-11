#include "main.h"

/**
 * print_rev - put a string in reverse
 * @s: pointer to the argument string
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
