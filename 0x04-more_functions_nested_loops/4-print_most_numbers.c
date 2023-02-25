#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * Description: Prints the numbers excluding 2 and 4
 * return: void
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; c <= 9; c++)
	{
	if(c == 2 || c == 4)
	{continue;
	}
	else
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}


