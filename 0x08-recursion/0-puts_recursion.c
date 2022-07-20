#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: string
 */

void _put_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_put_recursion(++s);
	}
}
