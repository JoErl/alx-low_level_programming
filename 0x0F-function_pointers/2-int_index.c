#include <stdlib.h>

/**
 * array_iterator - a function that searches for an integer.
 * @array: array to interate through.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
