#include "main.h"

/**
 * _islower - this prints out lower case
 *
 * @c: this is to be printed
 *
 * Return: 1 if it is a lowert case
 * and 0 otherwise(int c)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
