#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: Always 1 when c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
