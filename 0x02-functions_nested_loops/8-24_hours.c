#include "main.h"
/**
 * jack_bauer - a function that prints time
 *
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int i;
	int x;

	for (i = 0; i < 24; i++)
	{
		for (x = 0; x < 60; x++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
		}
	}
}
