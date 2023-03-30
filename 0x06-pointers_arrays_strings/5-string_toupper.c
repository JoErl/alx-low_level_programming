#include "main.h"

/**
 * string_toupper - makes the lowercase letters of a string
 * uppercase
 * @s: input string.
 * Return: 0
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}

