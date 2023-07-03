#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 * Return: alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = i; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
