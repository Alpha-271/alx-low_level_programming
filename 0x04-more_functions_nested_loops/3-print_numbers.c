#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers on a new line
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
