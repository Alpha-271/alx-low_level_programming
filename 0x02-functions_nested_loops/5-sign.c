#include "main.h"
/**
 * print_sign - a function that print sign of int
 * @n: the int is input in var c
 * Return: returns 1 0 & -1 based on result
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
