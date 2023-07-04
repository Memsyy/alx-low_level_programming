#include "main.h"

/**
 * _isdigit - checks if a charecter is a digit
 * @c : the number to be checked
 * Return: 1 for upper letter 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}
