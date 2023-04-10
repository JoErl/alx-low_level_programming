#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c : The character to be printed
 *
 * Return: On succes 1
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
