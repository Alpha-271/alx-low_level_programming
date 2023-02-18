#include <stdio.h>
/**
 * main- main function
 * Return: returns (0)
 */

int main(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
		putchar(x);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
