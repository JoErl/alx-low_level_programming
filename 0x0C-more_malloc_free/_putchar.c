#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout 
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
