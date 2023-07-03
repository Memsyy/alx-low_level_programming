#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @c: determines the absolute value
 * Return: Always absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
