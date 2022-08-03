#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of type int
 * @size: size of array
 * @action: function with argument int and no return
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
