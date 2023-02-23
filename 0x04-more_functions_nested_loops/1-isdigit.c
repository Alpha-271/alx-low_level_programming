#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for int btw 0 and 9
 * @c: variable for input
 * Return: return 1 if condition is true otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
