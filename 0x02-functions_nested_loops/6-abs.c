#include "main.h"
/**
 * _abs - a function that prints positive
 * @i: turns negative to positive
 * Return: returns integer
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
