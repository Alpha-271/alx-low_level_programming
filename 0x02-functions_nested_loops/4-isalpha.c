#include "main.h"
/**
 * _isalpha - a function that check for alphabet
 * @c: an int where value get input
 * Return: returns (1) if its an alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 133) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
