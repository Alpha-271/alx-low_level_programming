#include <stdio.h>
/**
 * main- main fuction
 * Return: returns (0)
 */

int main(void)
{
	char i[] = "_putchar";
	int x;

	for (x = 0;  i[x] != '\n' && i[x] != '\0'; x++)
	putchar(i[x]);
	putchar('\n');
	return (0);
}
