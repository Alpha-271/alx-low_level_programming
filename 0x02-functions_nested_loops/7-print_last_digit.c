#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: input are stored here
 * Return: returns last digit of int
 */

int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (i < 0)
		x = - (x);
	_putchar(x + '0');
	return (x);
}
