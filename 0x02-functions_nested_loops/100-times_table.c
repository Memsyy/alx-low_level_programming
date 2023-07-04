#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of times to be printed
 * Return: None if number is < 15, or > 0
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%d ", i * j);
		}

		printf("\n");
	}
}
