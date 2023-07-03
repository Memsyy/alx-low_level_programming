#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: value to be determined
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{

		-putchar(last + 48);
		return (l);
	}
}
