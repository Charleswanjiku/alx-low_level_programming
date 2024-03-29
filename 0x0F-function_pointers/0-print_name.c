#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: functions pointer that takes a string argument
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
