#include "main.h"
/**
 * _islower - check if letter is lower
 * @c: an int to check for c
 * Return: returns (1) if c is small letter
 * and (0) otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
