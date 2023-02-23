#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for if input is uppercase
 * @c: input variable
 * Return: return 1 if var is 1, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

