#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 * Return: alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		char d;

		for (d = 'a' ; d <= 'z' ; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
